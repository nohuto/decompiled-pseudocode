/*
 * XREFs of _LdrpLoadDelegatedNtdll@4 @ 0x4B3331FC
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _LdrpGetProcedureAddress@16 @ 0x4B2A6260 (_LdrpGetProcedureAddress@16.c)
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlReplaceSystemDirectoryInPath@16 @ 0x4B2E6110 (_RtlReplaceSystemDirectoryInPath@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtOpenFile@24 @ 0x4B2F2CB0 (_NtOpenFile@24.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _NtSystemDebugControl@24 @ 0x4B2F4550 (_NtSystemDebugControl@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _LdrpProtectAndRelocateImage@20 @ 0x4B3310B1 (_LdrpProtectAndRelocateImage@20.c)
 */

int __thiscall LdrpLoadDelegatedNtdll(void *this)
{
  int result; // eax
  _DWORD *v3; // edi
  int v4; // esi
  int v5; // ebx
  int v6; // esi
  void *ProcessHeap; // ecx
  int Heap; // eax
  int ValueKey; // eax
  size_t v10; // eax
  int Section; // ebx
  struct _TEB *v12; // edi
  void *ArbitraryUserPointer; // esi
  int v14; // eax
  unsigned int v15; // esi
  char **v16; // edi
  int v17; // [esp-Ch] [ebp-5ECh]
  int v18; // [esp-8h] [ebp-5E8h]
  int v19; // [esp-4h] [ebp-5E4h]
  size_t v20; // [esp+Ch] [ebp-5D4h] BYREF
  int v21; // [esp+10h] [ebp-5D0h] BYREF
  char *v22; // [esp+14h] [ebp-5CCh]
  HANDLE Handle; // [esp+18h] [ebp-5C8h] BYREF
  HANDLE FileHandle; // [esp+1Ch] [ebp-5C4h] BYREF
  int v25; // [esp+20h] [ebp-5C0h]
  int v26; // [esp+24h] [ebp-5BCh] BYREF
  _BYTE v27[8]; // [esp+28h] [ebp-5B8h] BYREF
  _DWORD v28[2]; // [esp+30h] [ebp-5B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [esp+38h] [ebp-5A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+50h] [ebp-590h] BYREF
  _BYTE v31[1024]; // [esp+58h] [ebp-588h] BYREF
  unsigned __int16 Src[64]; // [esp+458h] [ebp-188h] BYREF
  char v33; // [esp+4D8h] [ebp-108h] BYREF

  v25 = (int)this;
  if ( LdrpChildNtdll )
    return 0;
  result = -1073741772;
  if ( this )
  {
    result = RtlInitUnicodeStringEx((int)v27, L"DelegatedNtdll");
    if ( result >= 0 )
    {
      v3 = v31;
      result = ZwQueryValueKey((int)this, (int)v27, 2, (int)v31, 1024, (int)&v20);
      v4 = result;
      if ( result >= 0 )
      {
        v5 = 0;
LABEL_7:
        if ( v3[1] == 1 )
        {
          v10 = v3[2];
          v20 = v10;
          if ( v10 > 0x80 )
            v4 = -2147483643;
          else
            memcpy(Src, v3 + 3, v10);
        }
        else
        {
          v4 = -1073741788;
        }
LABEL_18:
        if ( v5 )
          RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v5);
        result = v4;
        goto LABEL_21;
      }
      if ( result != -2147483643 )
      {
LABEL_21:
        if ( v4 >= 0 )
        {
          v21 = 0x1000000;
          v22 = &v33;
          RtlAppendUnicodeToString((unsigned __int16 *)&v21, L"\\SystemRoot\\system32\\");
          RtlReplaceSystemDirectoryInPath((int)&v21, 1, 332, 1);
          result = RtlAppendUnicodeToString((unsigned __int16 *)&v21, Src);
          if ( result >= 0 )
          {
            ObjectAttributes.RootDirectory = 0;
            ObjectAttributes.SecurityDescriptor = 0;
            ObjectAttributes.SecurityQualityOfService = 0;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v21;
            ObjectAttributes.Length = 24;
            ObjectAttributes.Attributes = 64;
            if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
            {
              v28[0] = v21;
              v28[1] = v22;
              NtSystemDebugControl(38, (int)v28, 8, 0, 0, 0);
            }
            result = NtOpenFile(&FileHandle, 0x100021u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            if ( result >= 0 )
            {
              Handle = 0;
              Section = NtCreateSection((int)&Handle, 13, 0, 0, 16, 0x1000000, (int)FileHandle);
              if ( Section >= 0 )
              {
                v12 = NtCurrentTeb();
                ArbitraryUserPointer = v12->NtTib.ArbitraryUserPointer;
                v12->NtTib.ArbitraryUserPointer = v22;
                v26 = 0;
                v14 = ZwMapViewOfSection((int)Handle, -1, (int)&LdrpDelegatedNtdllBase, 0, 0, 0, (int)&v26, 1, 0, 2);
                v12->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
                if ( v14 == 1073741827 )
                  LdrpProtectAndRelocateImage((_DWORD *)LdrpDelegatedNtdllBase, v17, v18, v19);
                if ( RtlImageNtHeader(LdrpDelegatedNtdllBase) )
                {
                  v15 = 0;
                  v16 = &LdrpDelegatedNtdllExports;
                  while ( 1 )
                  {
                    Section = LdrpGetProcedureAddress(LdrpDelegatedNtdllBase, *v16, 0, (unsigned int *)v16[1]);
                    if ( Section < 0 )
                      break;
                    ++v15;
                    v16 += 2;
                    if ( v15 >= 0xD )
                    {
                      if ( *(_DWORD *)LdrDelegatedSystemDllInitBlock == LdrSystemDllInitBlock )
                      {
                        qmemcpy((void *)LdrDelegatedSystemDllInitBlock, &LdrSystemDllInitBlock, 0xF0u);
                        *(_BYTE *)LdrpChildNtdllPointer = 1;
                        *(_DWORD *)LdrpParentInterlockedPopEntrySListPointer = RtlInterlockedPopEntrySList;
                        *(_DWORD *)LdrpParentRtlInitializeNtUserPfnPointer = RtlInitializeNtUserPfn;
                        *(_DWORD *)LdrpParentRtlResetNtUserPfnPointer = RtlResetNtUserPfn;
                        *(_DWORD *)LdrpParentRtlRetrieveNtUserPfnPointer = RtlRetrieveNtUserPfn;
                      }
                      else
                      {
                        Section = -1073741735;
                      }
                      goto LABEL_39;
                    }
                  }
                  for ( ; v15; --v15 )
                    *(_DWORD *)v16[1] = 0;
                }
                else
                {
                  Section = -1073741701;
                }
              }
LABEL_39:
              NtClose(FileHandle);
              if ( Handle )
                NtClose(Handle);
              if ( Section < 0 )
              {
                if ( LdrpDelegatedNtdllBase )
                {
                  NtUnmapViewOfSection(-1, LdrpDelegatedNtdllBase);
                  LdrpDelegatedNtdllBase = 0;
                }
              }
              return Section;
            }
          }
        }
        return result;
      }
      while ( 1 )
      {
        v6 = v20;
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        if ( !ProcessHeap )
          return -1073741801;
        Heap = RtlAllocateHeap((int)ProcessHeap, NtdllBaseTag + 1572864, v20);
        v5 = Heap;
        if ( !Heap )
          return -1073741801;
        v3 = (_DWORD *)Heap;
        ValueKey = ZwQueryValueKey(v25, (int)v27, 2, Heap, v6, (int)&v20);
        v4 = ValueKey;
        if ( ValueKey >= 0 )
          goto LABEL_7;
        if ( ValueKey != -2147483643 )
          goto LABEL_18;
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v5);
      }
    }
  }
  return result;
}
