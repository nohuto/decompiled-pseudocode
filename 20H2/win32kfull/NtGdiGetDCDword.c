/*
 * XREFs of NtGdiGetDCDword @ 0x1C00EB280
 * Callers:
 *     <none>
 * Callees:
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026E454 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C028A654 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiGetDCDword(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // r14d
  int FontLanguageInfo; // esi
  unsigned int v6; // r15d
  struct _DC_ATTR *UserAttr; // rax
  int v8; // r14d
  int v9; // r14d
  int v10; // r14d
  int v11; // r14d
  int v12; // r14d
  int v13; // r14d
  int v14; // r14d
  struct _DC_ATTR *v15; // rax
  __int64 v16; // rbx
  DC *v18; // [rsp+20h] [rbp-28h] BYREF
  int v19; // [rsp+28h] [rbp-20h]
  unsigned int v20; // [rsp+2Ch] [rbp-1Ch]
  int v21; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  FontLanguageInfo = 0;
  v6 = 1;
  v19 = 0;
  v20 = 0;
  LOBYTE(a2) = 1;
  v18 = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( v18 )
  {
    if ( (*((_DWORD *)v18 + 11) & 2) == 0 )
    {
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v18);
      if ( UserAttr && !DC::SaveAttributes(v18, UserAttr) )
      {
        _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
        return 0;
      }
      *((_DWORD *)v18 + 11) |= 2u;
      v19 = 1;
    }
    if ( (*((_DWORD *)v18 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(v18);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  if ( !v18 )
    return 0;
  if ( v4 )
  {
    v8 = v4 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  if ( v14 == 1 )
                    FontLanguageInfo = *(_DWORD *)(*((_QWORD *)v18 + 122) + 104LL);
                  else
                    v6 = 0;
                }
                else
                {
                  LOBYTE(FontLanguageInfo) = *((_DWORD *)v18 + 8) == 1;
                }
              }
              else
              {
                FontLanguageInfo = dwGetFontLanguageInfo((struct XDCOBJ *)&v18);
              }
            }
            else
            {
              FontLanguageInfo = *((_DWORD *)v18 + 26);
            }
          }
          else if ( (*(_DWORD *)(*((_QWORD *)v18 + 122) + 108LL) & 1) != 0 )
          {
            FontLanguageInfo = 2 - ((*((_DWORD *)v18 + 62) & 4) != 0);
          }
          else
          {
            FontLanguageInfo = ((*((_DWORD *)v18 + 62) & 4) != 0) + 1;
          }
        }
        else
        {
          FontLanguageInfo = *(_DWORD *)(*((_QWORD *)v18 + 122) + 288LL);
        }
      }
      else
      {
        FontLanguageInfo = *(_DWORD *)(*((_QWORD *)v18 + 122) + 284LL);
      }
    }
    else
    {
      FontLanguageInfo = *(_DWORD *)(*((_QWORD *)v18 + 122) + 352LL);
    }
  }
  else
  {
    FontLanguageInfo = ((*((_DWORD *)v18 + 18) >> 13) & 1) == 0;
  }
  if ( v6 )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_DWORD *)MmUserProbeAddress;
    *a3 = FontLanguageInfo;
  }
  if ( v19 && (*((_DWORD *)v18 + 11) & 2) != 0 )
  {
    if ( !v20 )
    {
      v15 = XDCOBJ::GetUserAttr((XDCOBJ *)&v18);
      if ( v15 )
        DC::RestoreAttributes(v18, v15);
    }
    *((_DWORD *)v18 + 11) &= ~2u;
    v19 = 0;
  }
  v21 = 0;
  v16 = *(_QWORD *)v18;
  HmgDecrementExclusiveReferenceCountEx(v18, v20, &v21);
  if ( v21 )
    bDeleteDCInternalEx(v16, 0LL);
  return v6;
}
