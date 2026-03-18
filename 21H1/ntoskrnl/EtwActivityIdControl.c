/*
 * XREFs of EtwActivityIdControl @ 0x140241B50
 * Callers:
 *     IoReuseIrp @ 0x1402EB1A0 (IoReuseIrp.c)
 *     IoSetActivityIdIrp @ 0x140376260 (IoSetActivityIdIrp.c)
 *     IopInitActivityIdIrp @ 0x1404FB1F4 (IopInitActivityIdIrp.c)
 *     VrpIoctlDeviceDispatch @ 0x1405C9180 (VrpIoctlDeviceDispatch.c)
 *     VrpPostEnumerateKey @ 0x1405C9814 (VrpPostEnumerateKey.c)
 *     VrpRegistryCallback @ 0x1405C9BA0 (VrpRegistryCallback.c)
 *     VrpPostOpenOrCreate @ 0x1405C9FF0 (VrpPostOpenOrCreate.c)
 *     VrpPreOpenOrCreate @ 0x1405CA2E0 (VrpPreOpenOrCreate.c)
 *     VrpPostQueryKey @ 0x1405CAD04 (VrpPostQueryKey.c)
 *     VrpPostUnloadKey @ 0x14087EE38 (VrpPostUnloadKey.c)
 *     VrpPreFlushKey @ 0x14087EED8 (VrpPreFlushKey.c)
 *     VrpPreLoadKey @ 0x14087EFAC (VrpPreLoadKey.c)
 *     VrpPreQueryKeyName @ 0x14087FB10 (VrpPreQueryKeyName.c)
 *     IoCaptureLiveDump @ 0x140891CF8 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140892480 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall EtwActivityIdControl(ULONG ControlCode, LPGUID ActivityId)
{
  volatile signed __int64 *EtwSupport; // rcx
  struct _KTHREAD *CurrentThread; // r8
  char *Teb; // r8
  unsigned __int64 v6; // r9
  GUID *v7; // rax
  ULONG v8; // ecx
  __int16 v9; // ax
  ULONG v10; // ecx
  ULONG v11; // ecx
  volatile signed __int64 *v12; // rdx
  GUID v13; // xmm1
  NTSTATUS v14; // [rsp+0h] [rbp-38h]
  volatile signed __int64 *v15; // [rsp+8h] [rbp-30h]

  v14 = 0;
  if ( ControlCode == 3 )
  {
    EtwSupport = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
    *(_QWORD *)ActivityId->Data4 = _InterlockedIncrement64(EtwSupport + 1);
    *(_QWORD *)&ActivityId->Data1 = *EtwSupport;
    return v14;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = (char *)CurrentThread->Teb;
  if ( Teb )
  {
    v15 = (volatile signed __int64 *)(Teb + 5904);
    v6 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
    if ( v6 && ((v9 = *(_WORD *)(v6 + 8), v9 == 332) || v9 == 452) )
    {
      v7 = (GUID *)(Teb + 12112);
      v15 = (volatile signed __int64 *)(Teb + 12112);
    }
    else
    {
      v7 = (GUID *)(Teb + 5904);
    }
    v8 = ControlCode - 1;
    if ( v8 )
    {
      v10 = v8 - 1;
      if ( v10 )
      {
        v11 = v10 - 2;
        if ( v11 )
        {
          if ( v11 == 1 )
          {
            *ActivityId = *v7;
            v12 = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
            *((_QWORD *)v15 + 1) = _InterlockedIncrement64(v12 + 1);
            *v15 = *v12;
          }
          else
          {
            return -1073741811;
          }
        }
        else
        {
          v13 = *v7;
          *v7 = *ActivityId;
          *ActivityId = v13;
        }
      }
      else
      {
        *v7 = *ActivityId;
      }
    }
    else
    {
      *ActivityId = *v7;
    }
    return v14;
  }
  return -1073741637;
}
