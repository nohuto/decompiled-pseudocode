/*
 * XREFs of GreBeginGdiRenderingToDxSurface @ 0x1C010CAB8
 * Callers:
 *     NtGdiBeginGdiRendering @ 0x1C010CAA0 (NtGdiBeginGdiRendering.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0099034 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bReset@DC@@QEAAHXZ @ 0x1C010CBB8 (-bReset@DC@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreBeginGdiRenderingToDxSurface(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  unsigned int v7; // esi
  DYNAMICMODECHANGESHARELOCK *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdi
  HDC v11; // rdx
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64); // rax
  unsigned int v14; // eax
  DC *v15[5]; // [rsp+20h] [rbp-28h] BYREF
  char v16; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 && (int)GreDxgkEnableUnorderedWaitsForDevice((unsigned int)a3, 0LL) < 0 )
    return 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v16);
  LOBYTE(v6) = 5;
  v7 = 0;
  v9 = HmgShareLockCheck(a1, v6);
  if ( v9 )
  {
    if ( (a1 & 0x800000) == 0 )
    {
      if ( (unsigned int)GreGetObjectOwner(a1, 5LL) )
      {
        v10 = *(_QWORD *)(v9 + 48);
        if ( (*(_DWORD *)(v9 + 116) & 8) != 0 || *(_QWORD *)(v9 + 224) )
        {
          v11 = *(HDC *)(v9 + 160);
          *(_WORD *)(v9 + 102) &= ~0x200u;
          if ( v11 )
          {
            DCOBJ::DCOBJ((DCOBJ *)v15, v11);
            if ( v15[0] )
            {
              v7 = DC::bReset(v15[0]);
              if ( v15[0] )
                XDCOBJ::vUnlockFast((XDCOBJ *)v15);
              if ( v7 && (*(_DWORD *)(v9 + 116) & 8) != 0 )
              {
                v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v10 + 3480);
                v7 = 0;
                if ( v13 )
                {
                  v14 = v13(v9 + 24, a2, a3);
                  *(_DWORD *)(v9 + 116) |= 0x200u;
                  v7 = v14;
                }
              }
            }
          }
        }
      }
    }
    DEC_SHARE_REF_CNT(v9);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v8);
  return v7;
}
