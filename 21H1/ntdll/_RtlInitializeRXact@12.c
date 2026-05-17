/*
 * XREFs of _RtlInitializeRXact@12 @ 0x4B345820
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _ZwCreateKey@28 @ 0x4B2F2B50 (_ZwCreateKey@28.c)
 *     _ZwSetValueKey@24 @ 0x4B2F2F80 (_ZwSetValueKey@24.c)
 *     _ZwDeleteKey@4 @ 0x4B2F36B0 (_ZwDeleteKey@4.c)
 *     _NtDeleteValueKey@8 @ 0x4B2F36E0 (_NtDeleteValueKey@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _RXactpCommit@4 @ 0x4B34539B (_RXactpCommit@4.c)
 *     _RtlAbortRXact@4 @ 0x4B345550 (_RtlAbortRXact@4.c)
 *     _RtlpNtQueryValueKey@20 @ 0x4B36D280 (_RtlpNtQueryValueKey@20.c)
 */

int __stdcall RtlInitializeRXact(int a1, char a2, int *a3)
{
  int result; // eax
  int Heap; // ecx
  HANDLE v5; // eax
  int ValueKey; // esi
  int v7; // esi
  int v8; // ebx
  HANDLE Handle; // [esp+Ch] [ebp-E4h] BYREF
  int v10; // [esp+10h] [ebp-E0h] BYREF
  int v11; // [esp+14h] [ebp-DCh] BYREF
  UNICODE_STRING v12; // [esp+18h] [ebp-D8h] BYREF
  int v13; // [esp+20h] [ebp-D0h] BYREF
  _DWORD v14[6]; // [esp+24h] [ebp-CCh] BYREF
  int v15; // [esp+3Ch] [ebp-B4h] BYREF
  UNICODE_STRING v16; // [esp+40h] [ebp-B0h] BYREF
  UNICODE_STRING DestinationString; // [esp+48h] [ebp-A8h] BYREF
  int v18[3]; // [esp+50h] [ebp-A0h] BYREF
  _DWORD v19[3]; // [esp+5Ch] [ebp-94h] BYREF
  _BYTE v20[132]; // [esp+68h] [ebp-88h] BYREF

  v11 = 12;
  RtlInitUnicodeString(&DestinationString, 0);
  RtlInitUnicodeString(&v16, L"RXACT");
  v14[0] = 24;
  v14[2] = &v16;
  v14[1] = a1;
  v14[3] = 192;
  v14[4] = 0;
  v14[5] = 0;
  result = ZwCreateKey((int)&Handle, 196639, (int)v14, 0, 0, 0, (int)&v13);
  if ( result >= 0 )
  {
    Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 16);
    *a3 = Heap;
    if ( !Heap )
    {
      ZwDeleteKey((int)Handle);
      NtClose(Handle);
      return -1073741801;
    }
    v5 = Handle;
    *(_DWORD *)Heap = a1;
    *(_BYTE *)(Heap + 8) = 1;
    *(_DWORD *)(Heap + 12) = 0;
    *(_DWORD *)(Heap + 4) = v5;
    if ( v13 == 1 )
    {
      v19[0] = 1;
      ValueKey = ZwSetValueKey((int)Handle, (int)&DestinationString, 0, 0, (int)v19, 12);
      if ( ValueKey < 0 )
      {
        ZwDeleteKey((int)Handle);
LABEL_8:
        NtClose(Handle);
LABEL_9:
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, *a3);
        return ValueKey;
      }
      return 1073741828;
    }
    else
    {
      ValueKey = RtlpNtQueryValueKey((int)Handle, (int)&v15, v19, (int)&v11, (int)v18);
      if ( ValueKey < 0 )
        goto LABEL_8;
      if ( v11 != 12 || v19[0] != 1 )
      {
        ValueKey = -1073741736;
        goto LABEL_8;
      }
      RtlInitUnicodeString(&v12, L"Log");
      if ( ZwQueryValueKey((int)Handle, (int)&v12, 0, (int)v20, 128, (int)&v10) < 0 )
      {
        return 0;
      }
      else if ( a2 )
      {
        result = ZwQueryValueKey((int)Handle, (int)&v12, 1, 0, 0, (int)&v10);
        if ( result == -1073741789 )
        {
          v7 = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v10);
          if ( !v7 )
            return -1073741801;
          v8 = ZwQueryValueKey((int)Handle, (int)&v12, 1, v7, v10, (int)&v10);
          if ( v8 < 0
            || (*(_DWORD *)(*a3 + 12) = v7 + *(_DWORD *)(v7 + 8),
                *(_BYTE *)(*a3 + 8) = 0,
                v8 = RXactpCommit((_DWORD *)*a3),
                v8 < 0) )
          {
            RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v7);
            ValueKey = v8;
            goto LABEL_9;
          }
          NtDeleteValueKey((int)Handle, (int)&v12);
          *(_DWORD *)(*a3 + 12) = v7;
          return RtlAbortRXact(*a3);
        }
      }
      else
      {
        return -2147483624;
      }
    }
  }
  return result;
}
