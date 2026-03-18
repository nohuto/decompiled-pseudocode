/*
 * XREFs of CHidInput_Destroy @ 0x1C00087C0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C0008850 (--_GCHidInput@@UEAAPEAXI@Z.c)
 */

void *CHidInput_Destroy()
{
  void *result; // rax

  if ( gpHidInput )
  {
    result = CHidInput::`scalar deleting destructor'(gpHidInput, 1u);
    gpHidInput = 0LL;
  }
  return result;
}
