/*
 * XREFs of _RtlpAllocateActivationContextStackFrame@12 @ 0x4B2E35DF
 * Callers:
 *     _RtlActivateActivationContextEx@16 @ 0x4B2E3500 (_RtlActivateActivationContextEx@16.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpInitializeActivationContextStackFrameList@4 @ 0x4B2E36DD (_RtlpInitializeActivationContextStackFrameList@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 */

int __fastcall RtlpAllocateActivationContextStackFrame(int a1, int a2, _DWORD *a3)
{
  int v3; // esi
  unsigned int v4; // edi
  _DWORD *i; // ebx
  _DWORD *v6; // ecx
  unsigned int v7; // eax
  _DWORD *v8; // edx
  int v9; // eax
  _DWORD *v10; // ecx
  int Heap; // eax
  _DWORD *v13; // ebx
  _DWORD *v14; // eax
  int v15; // edx
  EXCEPTION_RECORD ExceptionRecord; // [esp+10h] [ebp-58h] BYREF

  if ( !a3 )
    return -1073741811;
  v3 = 0;
  *a3 = 0;
  if ( !a2 )
    return -1073741811;
  v4 = a2 + 4;
  for ( i = *(_DWORD **)(a2 + 4); i != (_DWORD *)v4; i = (_DWORD *)*i )
  {
    v6 = i - 2;
    if ( *(i - 2) != 1953721414 )
    {
      ExceptionRecord.ExceptionInformation[0] = 1;
      ExceptionRecord.ExceptionInformation[1] = 1;
      ExceptionRecord.ExceptionFlags = 1;
      ExceptionRecord.ExceptionRecord = 0;
      ExceptionRecord.NumberParameters = 4;
      ExceptionRecord.ExceptionInformation[2] = v4;
      ExceptionRecord.ExceptionInformation[3] = (unsigned int)(i - 2);
      ExceptionRecord.ExceptionCode = -1072365547;
      RtlRaiseException(&ExceptionRecord);
    }
    if ( v6[1] != 32 )
    {
      v7 = 0;
      v8 = i - 2;
      while ( (v8[8] & 4) == 0 )
      {
        ++v7;
        v8 += 12;
        if ( v7 >= 0x20 )
          goto LABEL_20;
      }
      v9 = v6[1] + 1;
      v6[1] = v9;
      v6[5] = ~v9;
      v10 = v8 + 6;
      if ( v8 != (_DWORD *)-24 )
        goto LABEL_10;
    }
LABEL_20:
    ;
  }
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 1560);
  v13 = (_DWORD *)Heap;
  if ( Heap )
  {
    RtlpInitializeActivationContextStackFrameList(Heap);
    v13[1] = 1;
    v10 = v13 + 6;
    v13[5] = -2;
    v14 = v13 + 2;
    v15 = *(_DWORD *)v4;
    if ( *(_DWORD *)(*(_DWORD *)v4 + 4) != v4 )
      __fastfail(3u);
    *v14 = v15;
    v13[3] = v4;
    *(_DWORD *)(v15 + 4) = v14;
    *(_DWORD *)v4 = v14;
LABEL_10:
    v10[2] = 8;
    *a3 = v10;
    return v3;
  }
  return -1073741801;
}
