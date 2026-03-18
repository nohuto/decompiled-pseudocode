/*
 * XREFs of MiValidateKernelHalLargePageRange @ 0x140A901A0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiMarkPfnVerified @ 0x14034461C (MiMarkPfnVerified.c)
 */

__int64 __fastcall MiValidateKernelHalLargePageRange(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  BOOL v5; // r14d
  unsigned __int64 v6; // rax
  struct _LIST_ENTRY *Flink; // r8
  _DWORD *v8; // r9
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rbp
  unsigned __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  if ( (a3 & 0x20000000) != 0 )
  {
    v3 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v4 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    if ( v4 < v3 )
    {
      v5 = MiPteInShadowRange((unsigned __int64)&v12);
      do
      {
        v6 = MI_READ_PTE_LOCK_FREE(v4);
        v12 = v6;
        if ( v5
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v6 & 1) != 0
          && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink && ((__int64)*(&Flink->Flink + (((unsigned __int64)&v12 >> 3) & 0x1FF)) & 0x20) != 0 )
            v6 |= 0x20uLL;
        }
        v9 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v10 = v9 + 24576;
        while ( v9 < v10 )
        {
          *(_QWORD *)(v9 + 16) = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x60;
          MiMarkPfnVerified(v9, 0, (__int64)Flink, v8);
          v9 += 48LL;
        }
        v4 += 8LL;
      }
      while ( v4 < v3 );
    }
  }
  return 0LL;
}
