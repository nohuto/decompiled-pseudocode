/*
 * XREFs of _xxxSendMessageEx@20 @ 0x9E444
 * Callers:
 *     _xxxSendMessageFF@20 @ 0xED808 (_xxxSendMessageFF@20.c)
 * Callees:
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall xxxSendMessageEx(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int HighLimit, int a4, ULONG a5)
{
  int v5; // eax
  int v6; // ecx
  unsigned int LowLimit; // [esp+10h] [ebp-3Ch]
  struct tagDDECONV *v9; // [esp+14h] [ebp-38h]
  int v10; // [esp+1Ch] [ebp-30h]
  int v11; // [esp+2Ch] [ebp-20h] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  if ( !a5 )
    return xxxSendTransformableMessageTimeout(BugCheckParameter2, a2, HighLimit, a4, 0, 0, 0, 0, 1);
  v11 = 0;
  if ( !KeGetCurrentThread() )
    return 0;
  ms_exc.registration.TryLevel = 0;
  if ( (a5 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a5 >= _MmUserProbeAddress )
    *(_BYTE *)_MmUserProbeAddress = 0;
  *(_BYTE *)a5 = *(_BYTE *)a5;
  *(_BYTE *)(a5 + 12) = *(_BYTE *)(a5 + 12);
  LowLimit = *(_DWORD *)a5;
  v9 = *(struct tagDDECONV **)(a5 + 4);
  ms_exc.registration.TryLevel = -2;
  v5 = xxxSendTransformableMessageTimeout(BugCheckParameter2, a2, HighLimit, a4, LowLimit, v9, &v11, 0, 1);
  v6 = v11;
  v10 = v11;
  *(_DWORD *)a5 = LowLimit;
  *(_DWORD *)(a5 + 4) = v9;
  *(_DWORD *)(a5 + 8) = v5;
  *(_DWORD *)(a5 + 12) = v10;
  ms_exc.registration.TryLevel = -2;
  return v6;
}
