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
  _DWORD *v4; // edi
  _DWORD *i; // ebx
  _DWORD *v6; // ecx
  unsigned int v7; // eax
  _DWORD *v8; // edx
  int v9; // eax
  _DWORD *v10; // ecx
  _DWORD *Heap; // eax
  _DWORD *v13; // ebx
  _DWORD *v14; // eax
  int v15; // edx
  SIZE_T v16; // [esp-4h] [ebp-6Ch]
  uintptr_t StackCookie; // [esp+Ch] [ebp-5Ch] BYREF
  int v18; // [esp+14h] [ebp-54h]
  int v19; // [esp+18h] [ebp-50h]
  int v20; // [esp+20h] [ebp-48h]
  int v21; // [esp+24h] [ebp-44h]
  int v22; // [esp+28h] [ebp-40h]
  _DWORD *v23; // [esp+2Ch] [ebp-3Ch]
  _DWORD *v24; // [esp+30h] [ebp-38h]

  if ( !a3 )
    return -1073741811;
  v3 = 0;
  *a3 = 0;
  if ( !a2 )
    return -1073741811;
  v4 = (_DWORD *)(a2 + 4);
  for ( i = *(_DWORD **)(a2 + 4); i != v4; i = (_DWORD *)*i )
  {
    v6 = i - 2;
    if ( *(i - 2) != 1953721414 )
    {
      v21 = 1;
      v22 = 1;
      v18 = 1;
      v19 = 0;
      v20 = 4;
      v23 = v4;
      v24 = i - 2;
      HIDWORD(StackCookie) = -1072365547;
      RtlRaiseException((PEXCEPTION_RECORD)((char *)&StackCookie + 4));
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
  LODWORD(v16) = 1560;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
  v13 = Heap;
  if ( Heap )
  {
    RtlpInitializeActivationContextStackFrameList(Heap);
    v13[1] = 1;
    v10 = v13 + 6;
    v13[5] = -2;
    v14 = v13 + 2;
    v15 = *v4;
    if ( *(_DWORD **)(*v4 + 4) != v4 )
      __fastfail(3u);
    *v14 = v15;
    v13[3] = v4;
    *(_DWORD *)(v15 + 4) = v14;
    *v4 = v14;
LABEL_10:
    v10[2] = 8;
    *a3 = v10;
    return v3;
  }
  return -1073741801;
}
