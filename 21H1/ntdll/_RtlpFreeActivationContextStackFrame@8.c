/*
 * XREFs of _RtlpFreeActivationContextStackFrame@8 @ 0x4B2E4B49
 * Callers:
 *     _RtlFreeActivationContextStack@4 @ 0x4B2E49C0 (_RtlFreeActivationContextStack@4.c)
 *     _RtlDeactivateActivationContext@8 @ 0x4B2E4A70 (_RtlDeactivateActivationContext@8.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 */

void __fastcall RtlpFreeActivationContextStackFrame(int a1, unsigned int a2)
{
  _DWORD *v2; // edi
  _DWORD *i; // ebx
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  _DWORD *v9; // edx
  int v10; // ecx
  struct _PEB *v11; // eax
  EXCEPTION_RECORD ExceptionRecord; // [esp+10h] [ebp-58h] BYREF

  if ( a2 && (*(_BYTE *)(a2 + 8) & 4) == 0 )
  {
    v2 = (_DWORD *)(a1 + 4);
    for ( i = *(_DWORD **)(a1 + 4); i != v2; i = (_DWORD *)*i )
    {
      v4 = i - 2;
      if ( *(i - 2) != 1953721414 )
      {
        ExceptionRecord.ExceptionRecord = 0;
        ExceptionRecord.NumberParameters = 4;
        ExceptionRecord.ExceptionInformation[0] = 1;
        ExceptionRecord.ExceptionInformation[1] = 1;
        ExceptionRecord.ExceptionInformation[2] = a1 + 4;
        ExceptionRecord.ExceptionInformation[3] = (unsigned int)(i - 2);
        ExceptionRecord.ExceptionCode = -1072365547;
        ExceptionRecord.ExceptionFlags = 1;
        RtlRaiseException(&ExceptionRecord);
      }
      if ( v4[5] != ~v4[1] )
      {
        ExceptionRecord.ExceptionRecord = 0;
        ExceptionRecord.NumberParameters = 4;
        ExceptionRecord.ExceptionInformation[0] = 1;
        ExceptionRecord.ExceptionInformation[1] = 2;
        ExceptionRecord.ExceptionInformation[2] = a1 + 4;
        ExceptionRecord.ExceptionInformation[3] = (unsigned int)(i - 2);
        ExceptionRecord.ExceptionCode = -1072365547;
        ExceptionRecord.ExceptionFlags = 1;
        RtlRaiseException(&ExceptionRecord);
      }
      if ( a2 >= (unsigned int)(v4 + 6) && a2 < (unsigned int)(v4 + 390) )
      {
        if ( (_DWORD *)a2 == &v4[12 * ((int)(a2 - (_DWORD)v4 - 24) / 48) + 6] )
        {
          v5 = v4[1];
          if ( v5 )
          {
            v6 = v5 - 1;
            v4[1] = v6;
            v4[5] = ~v6;
            *(_DWORD *)(a2 + 8) = 4;
            if ( !v4[1] )
            {
              v7 = (_DWORD *)i[1];
              if ( v7 != v2 )
              {
                do
                {
                  v8 = (_DWORD *)v7[1];
                  v9 = v7 - 2;
                  if ( !*(v7 - 1) )
                  {
                    v10 = *v7;
                    if ( *(_DWORD **)(*v7 + 4) != v7 || (_DWORD *)*v8 != v7 )
                      __fastfail(3u);
                    v11 = NtCurrentPeb();
                    *v8 = v10;
                    *(_DWORD *)(v10 + 4) = v8;
                    RtlFreeHeap(v11->ProcessHeap, 0, v9);
                  }
                  v7 = v8;
                }
                while ( v8 != v2 );
              }
            }
          }
        }
        return;
      }
    }
  }
}
