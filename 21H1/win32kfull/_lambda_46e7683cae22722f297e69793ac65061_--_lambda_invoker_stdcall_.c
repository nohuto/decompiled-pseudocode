/*
 * XREFs of _lambda_46e7683cae22722f297e69793ac65061_::_lambda_invoker_stdcall_ @ 0x1B167F
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     ?OnTimerNotification@InteractiveControlDevice@@QAEJXZ @ 0x1B22CF (-OnTimerNotification@InteractiveControlDevice@@QAEJXZ.c)
 */

struct InteractiveControlManager *__stdcall lambda_46e7683cae22722f297e69793ac65061_::_lambda_invoker_stdcall_(
        int a1,
        int a2,
        int a3,
        int a4)
{
  struct InteractiveControlManager *result; // eax
  int v5; // edi
  InteractiveControlDevice **v6; // esi
  InteractiveControlDevice *v7; // ecx

  result = InteractiveControlManager::Instance();
  v5 = 5;
  v6 = (InteractiveControlDevice **)((char *)result + 24);
  do
  {
    v7 = *v6;
    if ( *v6 )
    {
      if ( a3 == *((_DWORD *)v7 + 70) )
        result = (struct InteractiveControlManager *)InteractiveControlDevice::OnTimerNotification(v7);
    }
    ++v6;
    --v5;
  }
  while ( v5 );
  return result;
}
