/*
 * XREFs of MiDoStackCopy @ 0x140536160
 * Callers:
 *     <none>
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140334D40 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiGetLeafPfnBuddy @ 0x14038059C (MiGetLeafPfnBuddy.c)
 *     MiJumpStackTarget @ 0x140536290 (MiJumpStackTarget.c)
 */

__int64 __fastcall MiDoStackCopy(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  unsigned __int64 v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // r10
  bool v8; // cf
  int v9; // r9d
  __int16 v10; // r8
  unsigned __int64 LeafPfnBuddy; // rdx
  __int64 result; // rax
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(_QWORD *)a2;
  v6 = 6LL * *(_QWORD *)a2;
  v7 = 8 * v6 - 0x58000000000LL;
  BugCheckParameter3[1] = a3;
  v8 = *(_QWORD *)(a2 + 56) != 0LL;
  BugCheckParameter3[2] = a4;
  v9 = 1;
  BugCheckParameter3[0] = a2;
  v10 = v8 + 1;
  if ( v4 <= 0xFFFFFFFFFLL
    && ((*(_QWORD *)(8 * v6 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0
    && ((*(_QWORD *)(v7 + 40) >> 60) & 7) == 2 )
  {
    LeafPfnBuddy = MiGetLeafPfnBuddy((_QWORD *)(8 * v6 - 0x58000000000LL));
  }
  else
  {
    LeafPfnBuddy = -32LL;
  }
  if ( LeafPfnBuddy != -32LL && (*(_BYTE *)(v7 + 34) & 7) == 6 && *(_WORD *)(v7 + 32) == v10 )
  {
    if ( LeafPfnBuddy == -16LL && *(struct _KTHREAD **)(a2 + 24) != KeGetCurrentThread() )
    {
      result = KeExpandKernelStackAndCalloutInternal(
                 (void (__fastcall *)(ULONG_PTR))MiJumpStackTarget,
                 (ULONG_PTR)BugCheckParameter3,
                 24576,
                 v9,
                 0LL);
      if ( (int)result >= 0 )
        return result;
      *(_DWORD *)(a2 + 40) = result;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 40) = -1073740748;
  }
  return MiJumpStackTarget(BugCheckParameter3);
}
