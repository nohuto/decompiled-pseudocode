/*
 * XREFs of _lambda_52fdf85b089c14a0a285e54336b65a14_::operator() @ 0xF1AE2
 * Callers:
 *     _lambda_52fdf85b089c14a0a285e54336b65a14_::_lambda_invoker_stdcall_ @ 0xF1ADC (_lambda_52fdf85b089c14a0a285e54336b65a14_--_lambda_invoker_stdcall_.c)
 * Callees:
 *     ?NotifyHotKeyRegistrationChanged@@YGXQAUtagHOTKEY@@QAUtagCHILDHOTKEY@@_N@Z @ 0xF1B4A (-NotifyHotKeyRegistrationChanged@@YGXQAUtagHOTKEY@@QAUtagCHILDHOTKEY@@_N@Z.c)
 */

void __stdcall lambda_52fdf85b089c14a0a285e54336b65a14_::operator()(int a1, int a2)
{
  unsigned int v2; // edi
  int v3; // esi
  _DWORD *i; // ebx
  struct tagCHILDHOTKEY *v5; // [esp+0h] [ebp-10h]
  bool v6; // [esp+4h] [ebp-Ch]
  unsigned int v7; // [esp+Ch] [ebp-4h]

  v2 = 0;
  v7 = 0;
  do
  {
    v3 = *(int *)((char *)&gphkHashTable + v2);
    if ( v3 )
    {
      do
      {
        NotifyHotKeyRegistrationChanged((struct tagHOTKEY *const)1, v5, v6);
        for ( i = *(_DWORD **)(v3 + 28); i != (_DWORD *)(v3 + 28); i = (_DWORD *)*i )
          NotifyHotKeyRegistrationChanged((struct tagHOTKEY *const)1, v5, v6);
        v3 = *(_DWORD *)(v3 + 24);
      }
      while ( v3 );
      v2 = v7;
    }
    v2 += 4;
    v7 = v2;
  }
  while ( v2 < 0x200 );
}
