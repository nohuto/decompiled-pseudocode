/*
 * XREFs of GreDrawEscape @ 0x1C027D2F4
 * Callers:
 *     NtGdiDrawEscape @ 0x1C02AEBD0 (NtGdiDrawEscape.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075A68 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00FEC0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C027C1F8 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C027D158 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall GreDrawEscape(HDC a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // edi
  DC *v8; // rdx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64, _BYTE *, struct _RECTL *, unsigned int, __int64); // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // eax
  struct REGION *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  DC *v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v19[32]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h] BYREF
  int v21; // [rsp+78h] [rbp-88h]
  int v22; // [rsp+7Ch] [rbp-84h]
  __int16 v23; // [rsp+80h] [rbp-80h]
  struct _RECTL v24; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v25[32]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-30h]
  _BYTE v27[4]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v28[76]; // [rsp+E4h] [rbp-1Ch] BYREF
  __int64 v29; // [rsp+130h] [rbp+30h]
  int v30; // [rsp+138h] [rbp+38h]
  int v31; // [rsp+160h] [rbp+60h]
  __int64 v32; // [rsp+170h] [rbp+70h]

  v7 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  v8 = v18[0];
  if ( !v18[0] )
    return v7;
  if ( *((_QWORD *)v18[0] + 62) && (**((_DWORD **)v18[0] + 122) & 1) == 0 && (a2 != 8 || a3 >= 4) )
  {
    v20 = 0LL;
    v21 = 0;
    v22 = 0;
    v23 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v19, (struct XDCOBJ *)v18, 0);
    v9 = *((_QWORD *)v18[0] + 6);
    v10 = *(__int64 (__fastcall **)(__int64, __int64, _BYTE *, struct _RECTL *, unsigned int, __int64))(v9 + 2888);
    if ( v10 )
    {
      if ( a2 == 8 )
      {
        v11 = *((_QWORD *)v18[0] + 62);
        v12 = v11 + 112;
        if ( !v11 )
          v12 = 88LL;
        if ( (*(_DWORD *)v12 & 0x200000) == 0 )
          goto LABEL_24;
        v13 = v10((v11 + 24) & -(__int64)(v11 != 0), 8LL, 0LL, 0LL, a3, a4);
      }
      else
      {
        if ( (v19[24] & 1) != 0 )
        {
          v24 = *(struct _RECTL *)((char *)v18[0] + 1032);
          v14 = XDCOBJ::prgnEffRao(v18);
          v29 = 0LL;
          v30 = 0;
          v32 = 0LL;
          v31 = 1;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v27, v14, (struct ERECTL *)&v24, 0);
          if ( ERECTL::bEmpty((ERECTL *)v28) )
          {
            v7 = 1;
          }
          else
          {
            v15 = *((_QWORD *)v18[0] + 62);
            v16 = v15 + 112;
            if ( !v15 )
              v16 = 88LL;
            if ( (*(_DWORD *)v16 & 0x200000) != 0 )
            {
              if ( (*(_DWORD *)(v9 + 40) & 1) != 0 )
              {
                GreAcquireSemaphore(ghsemSprite);
                EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
              }
              v26 = 0LL;
              DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v25, (struct XDCOBJ *)v18, &v24);
              ++*(_DWORD *)(*((_QWORD *)v18[0] + 62) + 92LL);
              v7 = v10(
                     (*((_QWORD *)v18[0] + 62) + 24LL) & -(__int64)(*((_QWORD *)v18[0] + 62) != 0LL),
                     a2,
                     v27,
                     &v24,
                     a3,
                     a4);
              DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)v25);
              if ( (*(_DWORD *)(v9 + 40) & 1) != 0 )
              {
                EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
                GreReleaseSemaphoreInternal(ghsemSprite);
              }
            }
          }
          goto LABEL_24;
        }
        v13 = XDCOBJ::bFullScreen((XDCOBJ *)v18);
      }
      v7 = v13;
    }
LABEL_24:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
    if ( v20 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v20);
    v8 = v18[0];
  }
  if ( v8 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v18);
  return v7;
}
