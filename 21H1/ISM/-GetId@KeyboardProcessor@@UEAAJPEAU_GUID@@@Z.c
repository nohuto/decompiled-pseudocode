/*
 * XREFs of ?GetId@KeyboardProcessor@@UEAAJPEAU_GUID@@@Z @ 0x18001DD40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardProcessor::GetId(KeyboardProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_Keyboard;
  return result;
}
