/*
 * XREFs of ?GetId@MPCSixDofProcessor@@UEAAJPEAU_GUID@@@Z @ 0x18001E510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCSixDofProcessor::GetId(MPCSixDofProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_MPCSixDof;
  return result;
}
