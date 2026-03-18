/*
 * XREFs of ACPIInsertPhysicalDeviceLocationDescriptor @ 0x1C00A2DFC
 * Callers:
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C009E218 (ACPIProcessPhysicalDeviceLocation.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ACPIInsertPhysicalDeviceLocationDescriptor(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  _QWORD *result; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rcx

  v2 = *(_QWORD **)(a1 + 8);
  if ( *v2 != a1 )
    goto FatalListEntryError_7;
  *(_QWORD *)(a2 + 8) = v2;
  *(_QWORD *)a2 = a1;
  *v2 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  v3 = *(_QWORD *)(a2 + 104) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(a2 + 112) - *(_QWORD *)GUID_NULL.Data4;
  if ( v3 )
  {
    v5 = (_QWORD *)(a2 + 88);
    v6 = a1 + 40;
    goto LABEL_15;
  }
  result = (_QWORD *)(*(_QWORD *)(a2 + 136) - *(_QWORD *)&GUID_NULL.Data1);
  if ( !result )
    result = (_QWORD *)(*(_QWORD *)(a2 + 144) - *(_QWORD *)GUID_NULL.Data4);
  if ( result )
  {
    *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 136);
    return result;
  }
  if ( (*(_DWORD *)(a2 + 28) & 0x40000) != 0 )
  {
    v5 = (_QWORD *)(a2 + 72);
    v6 = a1 + 24;
LABEL_15:
    result = *(_QWORD **)(v6 + 8);
    if ( *result == v6 )
    {
      *v5 = v6;
      v5[1] = result;
      *result = v5;
      *(_QWORD *)(v6 + 8) = v5;
      return result;
    }
FatalListEntryError_7:
    __fastfail(3u);
  }
  if ( !*(_QWORD *)(a1 + 16) )
    *(_QWORD *)(a1 + 16) = a2;
  return result;
}
