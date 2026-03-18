/*
 * XREFs of ?LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085C50
 * Callers:
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085AC8 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00EC58C (-ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xxqXR2_EtwWriteTransfer @ 0x1C0033118 (McTemplateK0xxqXR2_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_SEGMENT::LogLockAllocationBackingStoreToEtw(
        struct _VIDMM_GLOBAL_ALLOC *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  struct _VIDMM_GLOBAL_ALLOC *v4; // rbx
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // r15
  __int64 i; // rdi
  unsigned int v9; // ebp
  __int64 *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // [rsp+28h] [rbp-240h]
  _BYTE v14[512]; // [rsp+40h] [rbp-228h] BYREF

  v3 = 0LL;
  v4 = a1;
  if ( bTracingEnabled )
  {
    v5 = 0LL;
    if ( (*((_DWORD *)a1 + 18) & 0xA000) != 0 )
    {
      v5 = *((_QWORD *)a1 + 68);
    }
    else
    {
      v6 = (_QWORD *)*((_QWORD *)a1 + 11);
      if ( v6 )
      {
        a2 = v6[3];
        if ( a2 )
        {
          v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6[1] + 24LL) + 88LL))(*(_QWORD *)(v6[1] + 24LL));
          v6 = (_QWORD *)*((_QWORD *)v4 + 11);
        }
        else
        {
          a1 = (struct _VIDMM_GLOBAL_ALLOC *)v6[10];
          if ( a1 )
            v5 = *((_QWORD *)a1 + 1);
        }
        v3 = *(_QWORD *)(v6[1] + 8LL);
      }
      else
      {
        v5 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 8LL);
      }
    }
    if ( v5 )
    {
      v7 = 0LL;
      for ( i = *((_QWORD *)v4 + 1) >> 12; (_DWORD)i; LODWORD(i) = i - v9 )
      {
        if ( (unsigned int)i >= 0x40 )
          v9 = 64;
        else
          v9 = i;
        v10 = (__int64 *)v14;
        v11 = v9;
        do
        {
          v12 = *(_QWORD *)(v5 + 8 * v7 + 48);
          v7 = (unsigned int)(v7 + 1);
          *v10++ = v12;
          --v11;
        }
        while ( v11 );
        if ( (byte_1C006E941 & 0x10) != 0 )
        {
          LODWORD(v13) = v9;
          McTemplateK0xxqXR2_EtwWriteTransfer(v12, (__int64)v10, 0LL, v3, v4, v13, v14);
        }
      }
    }
    else if ( (byte_1C006E941 & 0x10) != 0 )
    {
      McTemplateK0xxqXR2_EtwWriteTransfer((__int64)a1, a2, a3, v3, v4, 0, 0LL);
    }
  }
}
