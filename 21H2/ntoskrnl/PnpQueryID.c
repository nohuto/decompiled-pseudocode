/*
 * XREFs of PnpQueryID @ 0x140747310
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x14074AD30 (PipProcessStartPhase3.c)
 * Callees:
 *     PipSetDevNodeProblem @ 0x1407396AC (PipSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x1407457DC (PipSetDevNodeFlags.c)
 *     PnpIrpQueryID @ 0x140747410 (PnpIrpQueryID.c)
 *     PnpFixupID @ 0x140747498 (PnpFixupID.c)
 *     PnpLogEvent @ 0x1408A205C (PnpLogEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1408AC1AC (PnpSetInvalidIDEvent.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpQueryID(__int64 a1, __int64 a2, PVOID *a3, _DWORD *a4)
{
  __int64 v5; // rcx
  int v8; // edi
  int ID; // ebx
  int v10; // r9d
  int v11; // edx
  int v12; // r8d
  int v13; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  _DWORD v17[2]; // [rsp+30h] [rbp-28h] BYREF
  const wchar_t *v18; // [rsp+38h] [rbp-20h]

  v17[1] = 0;
  v5 = *(_QWORD *)(a1 + 32);
  *a4 = 0;
  v8 = a2;
  ID = PnpIrpQueryID(v5, a2, a3);
  if ( ID < 0 )
  {
LABEL_15:
    if ( ID == -1073479624 || !v8 || v8 == 3 && ID == -1073741670 )
    {
      PipSetDevNodeProblem(a1, 9, ID);
      v15 = *(_QWORD *)(a1 + 16);
      if ( (*(_DWORD *)(v15 + 396) & 0x200000) == 0 )
      {
        PipSetDevNodeFlags(v15, 0x200000);
        PnpSetInvalidIDEvent(*(_QWORD *)(a1 + 16) + 40LL);
      }
    }
    if ( ID != -1073479624 && !v8 && ID != -1073741670 && ID != -1073741810 )
    {
      v16 = *(_QWORD *)(a1 + 16) + 56LL;
      v17[0] = 5242958;
      v18 = L"failed IRP_MN_QUERY_ID-BusQueryDeviceID";
      PnpLogEvent(v16, v17, (unsigned int)ID, 0LL, 0);
    }
    if ( *a3 )
    {
      ExFreePoolWithTag(*a3, 0);
      *a3 = 0LL;
      *a4 = 0;
    }
    return (unsigned int)ID;
  }
  if ( !v8 )
  {
    v10 = 1;
LABEL_7:
    v12 = 0;
    v11 = 200;
    goto LABEL_8;
  }
  if ( v8 > 0 )
  {
    if ( v8 <= 2 )
    {
      v10 = -1;
      v11 = 1024;
      v12 = 1;
LABEL_8:
      v13 = PnpFixupID((unsigned int)*a3, v11, v12, v10, *(_QWORD *)(a1 + 16) + 56LL);
      goto LABEL_9;
    }
    if ( v8 == 3 )
    {
      v10 = 0;
      goto LABEL_7;
    }
  }
  v13 = 0;
LABEL_9:
  *a4 = 2 * v13;
  if ( !(2 * v13) )
    ID = -1073479624;
  if ( ID < 0 )
    goto LABEL_15;
  return (unsigned int)ID;
}
