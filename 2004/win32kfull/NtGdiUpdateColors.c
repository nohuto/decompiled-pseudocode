/*
 * XREFs of NtGdiUpdateColors @ 0x1C02B84F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C001A4BC (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001A554 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001ACC8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075A68 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008A108 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00FEC0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ?MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02A6068 (-MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x1C02BF60C (--0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z.c)
 */

__int64 __fastcall NtGdiUpdateColors(HDC a1)
{
  unsigned int v1; // esi
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r10
  __int64 v8; // r9
  struct REGION *v9; // rax
  struct ECLIPOBJ *v10; // rdx
  unsigned int updated; // eax
  DYNAMICMODECHANGESHARELOCK *v12; // rcx
  _BYTE v14[8]; // [rsp+40h] [rbp-C0h] BYREF
  struct _XLATEOBJ *v15; // [rsp+48h] [rbp-B8h] BYREF
  DC *v16[2]; // [rsp+50h] [rbp-B0h] BYREF
  __m128i rclBounds; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v18[32]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v19[2]; // [rsp+90h] [rbp-70h] BYREF
  __int16 v20; // [rsp+A0h] [rbp-60h]
  struct _CLIPOBJ v21; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v22; // [rsp+110h] [rbp+10h]
  int v23; // [rsp+118h] [rbp+18h]
  int v24; // [rsp+140h] [rbp+40h]
  __int64 v25; // [rsp+150h] [rbp+50h]

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v16) )
  {
    v5 = *((_QWORD *)v16[0] + 6);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v14, v2, v3, v4);
    v19[0] = 0LL;
    v19[1] = 0LL;
    v20 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v18, (struct XDCOBJ *)v16, 0);
    if ( (*(_DWORD *)(v5 + 2172) & 0x100) != 0 )
    {
      v6 = *((_QWORD *)v16[0] + 62);
      if ( v6 == *(_QWORD *)(v5 + 2552) )
      {
        v7 = *(_QWORD *)(v6 + 128);
        v8 = *((_QWORD *)v16[0] + 11);
        if ( (*((_DWORD *)v16[0] + 9) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)v16, (DC *)((char *)v16[0] + 1032));
        if ( (v18[24] & 1) != 0 )
        {
          if ( *(_QWORD *)(v8 + 80) && *(_QWORD *)(v8 + 88) )
          {
            XLATEMEMOBJ::XLATEMEMOBJ(&v15, v7, v8);
            if ( v15 )
            {
              v9 = XDCOBJ::prgnEffRao(v16);
              v22 = 0LL;
              v23 = 0;
              v24 = 1;
              v25 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&v21, v9, (DC *)((char *)v16[0] + 1032), 0);
              if ( ERECTL::bEmpty((ERECTL *)&v21.rclBounds) )
              {
                v1 = 1;
              }
              else
              {
                if ( (*((_DWORD *)v16[0] + 9) & 0xE0) != 0 )
                {
                  rclBounds = (__m128i)v21.rclBounds;
                  XDCOBJ::vAccumulateTight((XDCOBJ *)v16, v10, &rclBounds);
                }
                ++*(_DWORD *)(v6 + 92);
                if ( (*(_DWORD *)(v5 + 40) & 0x20000) != 0 )
                {
                  updated = MulUpdateColors((struct _SURFOBJ *)(v6 + 24), &v21, v15);
                }
                else if ( (*(_DWORD *)(v6 + 112) & 0x400) != 0 )
                {
                  updated = (*(__int64 (__fastcall **)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))(v5 + 2840))(
                              v6 + 24,
                              v6 + 24,
                              &v21,
                              v15,
                              &v21.rclBounds,
                              &v21.rclBounds);
                }
                else
                {
                  updated = ((__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))EngCopyBits)(
                              v6 + 24,
                              v6 + 24,
                              &v21,
                              v15,
                              &v21.rclBounds,
                              &v21.rclBounds);
                }
                v1 = updated;
              }
              FreeThreadBufferWithTag(v15);
              v15 = 0LL;
            }
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v15);
          }
          else
          {
            v1 = 1;
          }
        }
        else
        {
          v1 = XDCOBJ::bFullScreen((XDCOBJ *)v16);
        }
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v18);
    if ( v19[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v19);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v12);
  }
  if ( v16[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v16);
  return v1;
}
