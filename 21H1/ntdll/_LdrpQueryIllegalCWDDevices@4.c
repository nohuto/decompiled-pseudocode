/*
 * XREFs of _LdrpQueryIllegalCWDDevices@4 @ 0x4B33384B
 * Callers:
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlUnicodeStringToInteger@12 @ 0x4B2E07A0 (_RtlUnicodeStringToInteger@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __thiscall LdrpQueryIllegalCWDDevices(void *this)
{
  _DWORD *v2; // edi
  int ValueKey; // eax
  int v4; // esi
  int v5; // ebx
  int v6; // eax
  int v7; // esi
  void *ProcessHeap; // ecx
  int Heap; // eax
  int v10; // eax
  int result; // eax
  int v12; // [esp+10h] [ebp-420h] BYREF
  int v13[2]; // [esp+14h] [ebp-41Ch] BYREF
  unsigned __int16 v14[2]; // [esp+1Ch] [ebp-414h] BYREF
  _DWORD *v15; // [esp+20h] [ebp-410h]
  int v16; // [esp+24h] [ebp-40Ch]
  _BYTE v17[1028]; // [esp+28h] [ebp-408h] BYREF

  v16 = (int)this;
  if ( this && RtlInitUnicodeStringEx((int)v14, L"CWDIllegalInDLLSearch") >= 0 )
  {
    v2 = v17;
    ValueKey = ZwQueryValueKey((int)this, (int)v14, 2, (int)v17, 1024, (int)&v12);
    v4 = ValueKey;
    if ( ValueKey >= 0 )
    {
      v5 = 0;
LABEL_5:
      v6 = v2[1];
      if ( v6 != 3 && v6 != 7 )
      {
        if ( v6 == 4 )
        {
          if ( v2[2] == 4 )
          {
            v12 = 4;
            v13[0] = v2[3];
          }
          else
          {
            v4 = -1073741820;
          }
          goto LABEL_23;
        }
        if ( v6 == 1 )
        {
          if ( ((unsigned __int8)v13 & 3) != 0 )
          {
            v4 = -2147483646;
          }
          else
          {
            v12 = 4;
            v15 = v2 + 3;
            v14[0] = *((_WORD *)v2 + 4);
            v14[1] = *((_WORD *)v2 + 4);
            v4 = RtlUnicodeStringToInteger(v14, 0, v13);
          }
LABEL_23:
          if ( v5 )
            RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v5);
LABEL_25:
          if ( v4 >= 0 && v13[0] >= -1 && v13[0] <= 2 )
            goto LABEL_30;
          goto LABEL_28;
        }
      }
      v4 = -1073741788;
      goto LABEL_23;
    }
    if ( ValueKey != -2147483643 )
      goto LABEL_25;
    while ( 1 )
    {
      v7 = v12;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      Heap = RtlAllocateHeap((int)ProcessHeap, NtdllBaseTag + 1572864, v12);
      v5 = Heap;
      if ( !Heap )
        break;
      v2 = (_DWORD *)Heap;
      v10 = ZwQueryValueKey(v16, (int)v14, 2, Heap, v7, (int)&v12);
      v4 = v10;
      if ( v10 >= 0 )
        goto LABEL_5;
      if ( v10 != -2147483643 )
        goto LABEL_23;
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v5);
    }
  }
LABEL_28:
  v13[0] = (MEMORY[0x7FFE02D5] >> 4) & 3;
  if ( (MEMORY[0x7FFE02D5] & 0x30) == 0x30 )
    v13[0] = -1;
LABEL_30:
  result = v13[0];
  switch ( v13[0] )
  {
    case -1:
      LdrpIllegalCWDDevices = -1;
      break;
    case 1:
      LdrpIllegalCWDDevices = 0x2000;
      break;
    case 2:
      LdrpIllegalCWDDevices = 16;
      break;
    default:
      LdrpIllegalCWDDevices = 0;
      break;
  }
  return result;
}
