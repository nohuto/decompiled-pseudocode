/*
 * XREFs of _TpReserveTaskPost@12 @ 0x4B2E8D1F
 * Callers:
 *     _RtlQueueWorkItem@12 @ 0x4B2E8AE0 (_RtlQueueWorkItem@12.c)
 * Callees:
 *     _TppGetCurrentThreadNumaNode@12 @ 0x4B2B49C9 (_TppGetCurrentThreadNumaNode@12.c)
 *     _TppPoolpReferenceGlobalPool@12 @ 0x4B2B50CD (_TppPoolpReferenceGlobalPool@12.c)
 */

int __fastcall TpReserveTaskPost(volatile signed __int32 *a1, int a2, int a3)
{
  volatile signed __int32 *v3; // eax
  int v4; // esi
  int *v6; // ecx
  void *v7; // edx
  volatile signed __int32 *v9; // [esp+8h] [ebp-4h] BYREF

  v3 = a1;
  v4 = 0;
  v9 = a1;
  if ( a1 )
  {
    _InterlockedIncrement(a1);
    goto LABEL_7;
  }
  if ( a3 && (*(_BYTE *)(a3 + 28) & 2) != 0 )
  {
    v6 = &TppPoolpSerializedPool;
    v7 = &TppPoolpSerializedPoolLock;
  }
  else
  {
    v6 = &TppPoolpGlobalPool;
    v7 = &TppPoolpGlobalPoolLock;
  }
  v4 = TppPoolpReferenceGlobalPool((volatile signed __int32 **)v6, (int)v7, &v9);
  if ( v4 >= 0 )
  {
    v3 = v9;
LABEL_7:
    TppGetCurrentThreadNumaNode(v3, (_DWORD *)(a2 + 4), (unsigned __int8 *)(a2 + 8));
  }
  return v4;
}
