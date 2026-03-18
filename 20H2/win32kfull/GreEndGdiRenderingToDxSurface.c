/*
 * XREFs of GreEndGdiRenderingToDxSurface @ 0x1C010B8BC
 * Callers:
 *     NtGdiEndGdiRendering @ 0x1C010B880 (NtGdiEndGdiRendering.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0099034 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreEndGdiRenderingToDxSurface(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r15d
  __int64 v8; // rdx
  unsigned int v9; // edi
  DYNAMICMODECHANGESHARELOCK *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // ecx
  __int64 (__fastcall *v15)(__int64, _QWORD, __int64, __int64); // rax
  char v16; // [rsp+60h] [rbp+18h] BYREF

  v6 = a2;
  if ( a3 )
  {
    LOBYTE(a2) = 1;
    GreDxgkEnableUnorderedWaitsForDevice((unsigned int)a3, a2);
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v16);
  LOBYTE(v8) = 5;
  v9 = 0;
  v11 = HmgShareLockCheck(a1, v8);
  if ( v11 )
  {
    if ( (a1 & 0x800000) == 0 )
    {
      if ( (unsigned int)GreGetObjectOwner(a1, 5LL) )
      {
        v12 = *(_QWORD *)(v11 + 48);
        v13 = *(_DWORD *)(v11 + 116) & 8;
        if ( v13 || *(_QWORD *)(v11 + 224) )
        {
          v9 = 1;
          *(_WORD *)(v11 + 102) |= 0x200u;
          if ( v13 )
          {
            v15 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(v12 + 3488);
            v9 = 0;
            if ( v15 )
              v9 = v15(v11 + 24, v6, a4, a3);
          }
        }
      }
    }
    DEC_SHARE_REF_CNT(v11);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v10);
  return v9;
}
