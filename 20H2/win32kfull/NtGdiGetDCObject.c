/*
 * XREFs of NtGdiGetDCObject @ 0x1C00990B0
 * Callers:
 *     CreateCompatiblePublicDC @ 0x1C014E6C8 (CreateCompatiblePublicDC.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0099080 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026E454 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiGetDCObject(__int64 a1, int a2)
{
  __int64 v3; // rsi
  __int64 v5; // rdx
  DC *v6; // r9
  struct _DC_ATTR *UserAttr; // rax
  __int64 v8; // rdx
  int v9; // ebx
  struct _DC_ATTR *v10; // rax
  __int64 v11; // rbx
  __int64 *v13; // rax
  DC *v14; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+28h] [rbp-58h]
  __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+40h] [rbp-40h]
  int v18; // [rsp+48h] [rbp-38h]
  _QWORD v19[2]; // [rsp+50h] [rbp-30h] BYREF
  __int16 v20; // [rsp+60h] [rbp-20h]
  __int64 v21; // [rsp+68h] [rbp-18h]
  __int64 v22; // [rsp+70h] [rbp-10h]
  __int64 v23; // [rsp+78h] [rbp-8h]
  int v24; // [rsp+B0h] [rbp+30h] BYREF

  v3 = 0LL;
  if ( (unsigned int)PsGetWin32KFilterSet() != 5 || a1 != -589410304 )
  {
    v15 = 0LL;
    LOBYTE(v5) = 1;
    v14 = (DC *)HmgLockEx(a1, v5, 0LL);
    v6 = v14;
    if ( v14 )
    {
      if ( (*((_DWORD *)v14 + 11) & 2) == 0 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v14);
        if ( UserAttr && !DC::SaveAttributes(v14, UserAttr) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v14 + 3);
          return v3;
        }
        *((_DWORD *)v14 + 11) |= 2u;
        v6 = v14;
        LODWORD(v15) = 1;
      }
      if ( (*((_DWORD *)v6 + 130) & 4) == 0 )
      {
LABEL_8:
        if ( v6 )
        {
          v8 = *((_QWORD *)v6 + 122);
          v9 = *(_DWORD *)(v8 + 152);
          if ( (v9 & 0x1000) != 0 )
          {
            GreDCSelectBrush(v6, *(_QWORD *)(v8 + 160));
            v6 = v14;
          }
          if ( (v9 & 0x2000) != 0 )
          {
            GreDCSelectPen(v6, *(_QWORD *)(*((_QWORD *)v6 + 122) + 168LL));
            v6 = v14;
          }
          if ( a2 == 655360 )
          {
            v3 = *(_QWORD *)(*((_QWORD *)v6 + 122) + 296LL);
          }
          else if ( a2 == 0x80000 )
          {
            v3 = *((_QWORD *)v6 + 10);
          }
          else
          {
            switch ( a2 )
            {
              case 327680:
                v19[1] = 0LL;
                v16 = 0LL;
                v20 = 256;
                v17 = 0LL;
                v18 = 0;
                v19[0] = 0LL;
                v23 = 0LL;
                v22 = 0LL;
                v21 = 0LL;
                DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)&v16, (struct XDCOBJ *)&v14);
                v3 = *((_QWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)&v14) + 4);
                DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v16);
                if ( v19[0] )
                  DLODCOBJ::vUnlock((DLODCOBJ *)v19);
                v6 = v14;
                goto LABEL_15;
              case 1048576:
                v13 = (__int64 *)*((_QWORD *)v6 + 17);
                break;
              case 3145728:
              case 5242880:
                v13 = (__int64 *)*((_QWORD *)v6 + 18);
                break;
              default:
                goto LABEL_15;
            }
            v3 = *v13;
          }
LABEL_15:
          if ( (_DWORD)v15 && (*((_DWORD *)v6 + 11) & 2) != 0 )
          {
            if ( !HIDWORD(v15) )
            {
              v10 = XDCOBJ::GetUserAttr((XDCOBJ *)&v14);
              if ( v10 )
                DC::RestoreAttributes(v14, v10);
              v6 = v14;
            }
            *((_DWORD *)v6 + 11) &= ~2u;
            v6 = v14;
            LODWORD(v15) = 0;
          }
          v24 = 0;
          v11 = *(_QWORD *)v6;
          HmgDecrementExclusiveReferenceCountEx(v6, HIDWORD(v15), &v24);
          if ( v24 )
            bDeleteDCInternalEx(v11, 0LL);
        }
        return v3;
      }
      DC::vMarkTransformDirty(v6);
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
    v6 = v14;
    goto LABEL_8;
  }
  if ( a2 == 655360 )
    return GreGetStockObject(13LL);
  else
    return 0LL;
}
