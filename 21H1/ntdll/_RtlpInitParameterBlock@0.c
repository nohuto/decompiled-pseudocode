/*
 * XREFs of _RtlpInitParameterBlock@0 @ 0x4B2EA5B7
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlpInitParameterBlock()
{
  struct _PEB *v0; // ebx
  size_t v1; // edi
  char *Heap; // eax
  char *v3; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v15; // [esp+Ch] [ebp-8h] BYREF
  void *Src; // [esp+10h] [ebp-4h] BYREF

  v0 = NtCurrentPeb();
  Src = v0->ProcessParameters;
  v1 = *((_DWORD *)Src + 1);
  Heap = (char *)RtlAllocateHeap((int)v0->ProcessHeap, 0, v1);
  v3 = Heap;
  if ( !Heap )
    return -1073741670;
  memcpy(Heap, Src, v1);
  v4 = *((_DWORD *)v3 + 10);
  v5 = v3 - (_BYTE *)Src;
  if ( v4 )
    *((_DWORD *)v3 + 10) = v5 + v4;
  v6 = *((_DWORD *)v3 + 13);
  if ( v6 )
    *((_DWORD *)v3 + 13) = v5 + v6;
  v7 = *((_DWORD *)v3 + 15);
  if ( v7 )
    *((_DWORD *)v3 + 15) = v5 + v7;
  v8 = *((_DWORD *)v3 + 17);
  if ( v8 )
    *((_DWORD *)v3 + 17) = v5 + v8;
  v9 = *((_DWORD *)v3 + 29);
  if ( v9 )
    *((_DWORD *)v3 + 29) = v5 + v9;
  v10 = *((_DWORD *)v3 + 31);
  if ( v10 )
    *((_DWORD *)v3 + 31) = v5 + v10;
  v11 = *((_DWORD *)v3 + 33);
  if ( v11 )
    *((_DWORD *)v3 + 33) = v5 + v11;
  v12 = *((_DWORD *)v3 + 35);
  if ( v12 )
    *((_DWORD *)v3 + 35) = v5 + v12;
  v13 = *((_DWORD *)v3 + 170);
  if ( v13 )
    *((_DWORD *)v3 + 170) = v5 + v13;
  v0->ProcessParameters = (_RTL_USER_PROCESS_PARAMETERS *)v3;
  v15 = 0;
  NtFreeVirtualMemory(-1, &Src, &v15, 0x8000);
  return 0;
}
