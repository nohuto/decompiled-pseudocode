/*
 * XREFs of ?HampWakeManagerFindContextByActivityHandle@@YAPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_WAKE_REFERENCE_MANAGER@@_K@Z @ 0x180003588
 * Callers:
 *     ?HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z @ 0x180003970 (-HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z.c)
 * Callees:
 *     ?HampWakeContextTreeCompareByActivityId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180037218 (-HampWakeContextTreeCompareByActivityId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _HAM_HOST_WAKE_CONTEXT *__fastcall HampWakeManagerFindContextByActivityHandle(
        struct _HAM_WAKE_REFERENCE_MANAGER *a1,
        __int64 a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rbx
  int v4; // edi
  int v5; // eax
  unsigned __int64 v6; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v2 = (unsigned __int64)a1 + 80;
  v3 = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && v3 )
    v3 ^= v2;
  v4 = *(_BYTE *)(v2 + 8) & 1;
  while ( v3 )
  {
    v5 = HampWakeContextTreeCompareByActivityId(&v8, (struct _RTL_BALANCED_NODE *)v3);
    if ( v5 >= 0 )
    {
      if ( v5 <= 0 )
        return (struct _HAM_HOST_WAKE_CONTEXT *)((v3 - 64) & -(__int64)(v3 != 0));
      v6 = *(_QWORD *)(v3 + 8);
    }
    else
    {
      v6 = *(_QWORD *)v3;
    }
    if ( v4 && v6 )
      v3 ^= v6;
    else
      v3 = v6;
  }
  return (struct _HAM_HOST_WAKE_CONTEXT *)((v3 - 64) & -(__int64)(v3 != 0));
}
