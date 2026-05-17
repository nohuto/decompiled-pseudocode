/*
 * XREFs of _RtlpGetStackLimits@8 @ 0x4B2E92BF
 * Callers:
 *     _RtlUnwind@16 @ 0x4B2E8E30 (_RtlUnwind@16.c)
 *     _RtlDispatchException@8 @ 0x4B2E8F8C (_RtlDispatchException@8.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpGetStackLimits(_DWORD *a1, _DWORD *a2)
{
  struct _TEB *v2; // eax
  _UNKNOWN **StackBase; // esi
  _UNKNOWN **StackLimit; // eax
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+4h] BYREF

  v2 = NtCurrentTeb();
  StackBase = (_UNKNOWN **)v2->NtTib.StackBase;
  StackLimit = (_UNKNOWN **)v2->NtTib.StackLimit;
  *a2 = StackBase;
  *a1 = StackLimit;
  return StackLimit <= &retaddr && &retaddr < StackBase;
}
