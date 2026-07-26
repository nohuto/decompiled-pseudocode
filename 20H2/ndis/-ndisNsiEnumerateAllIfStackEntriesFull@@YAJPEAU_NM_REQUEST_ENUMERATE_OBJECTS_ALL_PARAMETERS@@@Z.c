/*
 * XREFs of ?ndisNsiEnumerateAllIfStackEntriesFull@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00177A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisNsiEnumerateAllIfStackEntriesFull(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // si
  _QWORD *v4; // rdx
  unsigned int v5; // r8d
  PVOID *v6; // rcx
  PVOID *v7; // rax
  unsigned int v8; // ebx

  v2 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x12u,
      (struct _GUID *)&WPP_97b9fb6a84ce353ae77a2fb1f333ded7_Traceguids,
      a1);
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  KeAcquireSpinLockAtDpcLevel(&qword_1C00E4B68);
  v4 = (_QWORD *)*((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 22);
  if ( v4 && *((_DWORD *)a1 + 6) != 8
    || *((_QWORD *)a1 + 7)
    || *((_DWORD *)a1 + 16)
    || *((_QWORD *)a1 + 9)
    || *((_DWORD *)a1 + 20)
    || *((_QWORD *)a1 + 5)
    || *((_DWORD *)a1 + 12) )
  {
    v8 = -1073741306;
  }
  else if ( !v4 && v5 )
  {
    v8 = -1073741811;
  }
  else
  {
    v6 = (PVOID *)qword_1C00E4B58;
    while ( v6 != &qword_1C00E4B58 )
    {
      v7 = v6;
      v6 = (PVOID *)*v6;
      if ( v2 < v5 )
        *v4++ = v7[2];
      ++v2;
    }
    *((_DWORD *)a1 + 22) = v2;
    v8 = v5 < v2 ? 0x105 : 0;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_1C00E4B68);
  KeReleaseSpinLock(&ndisIfListLock, v3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x13u,
      (struct _GUID *)&WPP_97b9fb6a84ce353ae77a2fb1f333ded7_Traceguids,
      (char)a1,
      v8);
  return v8;
}
