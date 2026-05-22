/*
 * XREFs of ?GetId@TouchProcessor@@UEAAJPEAU_GUID@@@Z @ 0x18001EA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchProcessor::GetId(TouchProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_Touch;
  return result;
}
