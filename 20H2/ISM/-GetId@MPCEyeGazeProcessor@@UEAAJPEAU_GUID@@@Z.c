/*
 * XREFs of ?GetId@MPCEyeGazeProcessor@@UEAAJPEAU_GUID@@@Z @ 0x18001E980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCEyeGazeProcessor::GetId(MPCEyeGazeProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_MPCEyeGaze;
  return result;
}
