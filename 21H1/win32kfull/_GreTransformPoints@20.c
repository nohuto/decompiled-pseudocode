/*
 * XREFs of _GreTransformPoints@20 @ 0x8DA90
 * Callers:
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     ?InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z @ 0x35B68 (-InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z.c)
 *     _zzzSetCaretPos@8 @ 0x820C0 (_zzzSetCaretPos@8.c)
 *     _NtGdiTransformPoints@20 @ 0x8D98C (_NtGdiTransformPoints@20.c)
 *     _xxxGetUpdateRect@12 @ 0xA5AFE (_xxxGetUpdateRect@12.c)
 *     _xxxSoundSentry@0 @ 0x1782B3 (_xxxSoundSentry@0.c)
 * Callees:
 *     ?vMarkTransformDirty@DC@@QAEXXZ @ 0x1CDA19 (-vMarkTransformDirty@DC@@QAEXXZ.c)
 */

int __fastcall GreTransformPoints(int a1, struct _POINTL *a2, struct _POINTL *a3, signed int a4, int a5)
{
  int v5; // ebx
  DC *v6; // ecx
  struct _DC_ATTR *UserAttr; // eax
  unsigned int v8; // esi
  signed int v9; // edx
  unsigned int v10; // eax
  char *v11; // eax
  int v12; // eax
  struct _DC_ATTR *v13; // eax
  int v14; // esi
  _DWORD v16[3]; // [esp+8h] [ebp-1Ch] BYREF
  DC *v17; // [esp+14h] [ebp-10h] BYREF
  int v18; // [esp+18h] [ebp-Ch]
  int v19; // [esp+1Ch] [ebp-8h]
  struct _POINTL *v20; // [esp+20h] [ebp-4h]

  v5 = 0;
  v20 = a2;
  LOBYTE(a2) = 1;
  v18 = 0;
  v19 = 0;
  v6 = (DC *)HmgLockEx(a1, a2, 0);
  v17 = v6;
  if ( !v6 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_36;
  }
  if ( (*((_BYTE *)v6 + 32) & 2) == 0 )
  {
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v17);
    if ( UserAttr && !DC::SaveAttributes(v17, UserAttr) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v17 + 2);
      v6 = 0;
      v17 = 0;
      goto LABEL_20;
    }
    *((_DWORD *)v17 + 8) |= 2u;
    v6 = v17;
    v18 = 1;
  }
  if ( (*((_BYTE *)v6 + 520) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v6);
LABEL_36:
    v6 = v17;
  }
  if ( !v6 )
    return v5;
  if ( a4 <= 0 )
  {
    v5 = 1;
  }
  else
  {
    v8 = a5 & 0x7FFFFFFF;
    v9 = (a5 & 0x7FFFFFFF) != 0 ? 516 : 1026;
    if ( a5 >= 0 )
      v9 |= 0x80000000;
    v16[1] = *(_DWORD *)(*((_DWORD *)v6 + 255) + 228);
    v16[2] = *(_DWORD *)(*((_DWORD *)v6 + 255) + 148) & 1;
    if ( (*(_DWORD *)(*((_DWORD *)v6 + 255) + 340) & 0x1E000) == 0 && v9 == 516 )
    {
      v11 = (char *)v6 + 240;
      v16[0] = (char *)v6 + 240;
    }
    else
    {
      v10 = v9 & 0x80000000;
      if ( v9 < 0 )
        v9 &= ~0x80000000;
      EXFORMOBJ::vInit((EXFORMOBJ *)v16, (struct XDCOBJ *)&v17, v9, v10);
      v6 = v17;
      v11 = (char *)v16[0];
    }
    if ( !v11 )
      goto LABEL_20;
    if ( v8 <= 1 )
    {
      v12 = EXFORMOBJ::bXform((EXFORMOBJ *)v16, v20, a3, a4);
LABEL_19:
      v6 = v17;
      v5 = v12;
      goto LABEL_20;
    }
    if ( v8 == 2 )
    {
      v12 = EXFORMOBJ::bXform((EXFORMOBJ *)v16, v20, (struct _POINTFIX *)a3, a4);
      goto LABEL_19;
    }
  }
LABEL_20:
  if ( v6 )
  {
    if ( v18 && (*((_BYTE *)v6 + 32) & 2) != 0 )
    {
      if ( !v19 )
      {
        v13 = XDCOBJ::GetUserAttr((XDCOBJ *)&v17);
        v6 = v17;
        if ( v13 )
        {
          DC::RestoreAttributes(v17, v13);
          v6 = v17;
        }
      }
      *((_DWORD *)v6 + 8) &= ~2u;
      v18 = 0;
      v6 = v17;
    }
    a4 = 0;
    v14 = *(_DWORD *)v6;
    HmgDecrementExclusiveReferenceCountEx(v6, v19, &a4);
    if ( a4 )
      bDeleteDCInternalEx(v14, 0);
  }
  return v5;
}
