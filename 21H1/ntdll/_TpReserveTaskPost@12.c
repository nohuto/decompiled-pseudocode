/*
 * XREFs of _TpReserveTaskPost@12 @ 0x4B2E8D1F
 * Callers:
 *     _RtlQueueWorkItem@12 @ 0x4B2E8AE0 (_RtlQueueWorkItem@12.c)
 * Callees:
 *     _TppGetCurrentThreadNumaNode@12 @ 0x4B2B49C9 (_TppGetCurrentThreadNumaNode@12.c)
 *     _TppPoolpReferenceGlobalPool@12 @ 0x4B2B50CD (_TppPoolpReferenceGlobalPool@12.c)
 */

NTSTATUS __fastcall TpReserveTaskPost(volatile signed __int32 *a1, int a2, int a3)
{
  _RTL_SRWLOCK *v3; // eax
  NTSTATUS v4; // esi
  int *v6; // ecx
  _RTL_SRWLOCK *v7; // edx
  _RTL_SRWLOCK *v9; // [esp+8h] [ebp-4h] BYREF

  v3 = (_RTL_SRWLOCK *)a1;
  v4 = 0;
  v9 = (_RTL_SRWLOCK *)a1;
  if ( a1 )
  {
    _InterlockedIncrement(a1);
    goto LABEL_7;
  }
  if ( a3 && (*(_BYTE *)(a3 + 28) & 2) != 0 )
  {
    v6 = &TppPoolpSerializedPool;
    v7 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
  }
  else
  {
    v6 = &TppPoolpGlobalPool;
    v7 = &TppPoolpGlobalPoolLock;
  }
  v4 = TppPoolpReferenceGlobalPool((volatile signed __int32 **)v6, v7, (volatile signed __int32 **)&v9);
  if ( v4 >= 0 )
  {
    v3 = v9;
LABEL_7:
    TppGetCurrentThreadNumaNode(v3, (_DWORD *)(a2 + 4), (unsigned __int8 *)(a2 + 8));
  }
  return v4;
}
