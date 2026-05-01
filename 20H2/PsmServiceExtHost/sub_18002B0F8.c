/*
 * XREFs of sub_18002B0F8 @ 0x18002B0F8
 * Callers:
 *     sub_180036450 @ 0x180036450 (sub_180036450.c)
 *     sub_18003837C @ 0x18003837C (sub_18003837C.c)
 *     sub_18003E220 @ 0x18003E220 (sub_18003E220.c)
 *     sub_180043688 @ 0x180043688 (sub_180043688.c)
 *     sub_180043E7C @ 0x180043E7C (sub_180043E7C.c)
 *     sub_1800441FC @ 0x1800441FC (sub_1800441FC.c)
 *     sub_180044270 @ 0x180044270 (sub_180044270.c)
 *     sub_1800442E4 @ 0x1800442E4 (sub_1800442E4.c)
 *     sub_180044348 @ 0x180044348 (sub_180044348.c)
 *     sub_1800443F0 @ 0x1800443F0 (sub_1800443F0.c)
 *     sub_18004445C @ 0x18004445C (sub_18004445C.c)
 *     sub_1800444C8 @ 0x1800444C8 (sub_1800444C8.c)
 *     sub_1800849F0 @ 0x1800849F0 (sub_1800849F0.c)
 * Callees:
 *     sub_18002B2B8 @ 0x18002B2B8 (sub_18002B2B8.c)
 *     sub_18002B3C0 @ 0x18002B3C0 (sub_18002B3C0.c)
 *     sub_180036520 @ 0x180036520 (sub_180036520.c)
 *     sub_18003667C @ 0x18003667C (sub_18003667C.c)
 *     sub_180036F40 @ 0x180036F40 (sub_180036F40.c)
 *     sub_180037DB0 @ 0x180037DB0 (sub_180037DB0.c)
 */

__int64 __fastcall sub_18002B0F8(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rsi
  int v6; // edi
  unsigned int v8; // eax
  PVOID Heap; // rax
  void *v10; // rbx

  v3 = a2;
  RtlAcquireSRWLockShared(&unk_1800B3D60);
  v4 = *((_QWORD *)&unk_1800B3D60 + v3 + 2);
  v5 = v3;
  if ( v4 )
  {
    sub_18002B2B8(v4, a1, 2LL);
    return 0;
  }
  else
  {
    RtlReleaseSRWLockShared(&unk_1800B3D60);
    v8 = sub_180037DB0((unsigned int)v3);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    v10 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    sub_180036F40(Heap, (unsigned int)v3);
    v6 = sub_18002B3C0(v10);
    if ( v6 >= 0 )
    {
      RtlAcquireSRWLockExclusive(&unk_1800B3D60);
      dword_1800B3D68 = GetCurrentThreadId();
      if ( !*((_QWORD *)&unk_1800B3D60 + v5 + 2) )
      {
        *((_QWORD *)&unk_1800B3D60 + v5 + 2) = v10;
        dword_1800B3D68 = 0;
        RtlReleaseSRWLockExclusive(&unk_1800B3D60);
        return (unsigned int)v6;
      }
      sub_18003667C(v10);
      v10 = 0LL;
      sub_18002B2B8(*((_QWORD *)&unk_1800B3D60 + v5 + 2), a1, 1LL);
      v6 = 0;
    }
    if ( v10 )
    {
      sub_180036520(v10);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    }
  }
  return (unsigned int)v6;
}
