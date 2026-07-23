/*
 * XREFs of _LdrpAccessResourceData@16 @ 0x4B2BD414
 * Callers:
 *     _RtlLoadString@32 @ 0x4B2BA030 (_RtlLoadString@32.c)
 *     _RtlFindMessage@20 @ 0x4B2DFF20 (_RtlFindMessage@20.c)
 *     _LdrAccessResource@16 @ 0x4B308B00 (_LdrAccessResource@16.c)
 * Callees:
 *     _LdrpAccessResourceDataNoMultipleLanguage@16 @ 0x4B2BD9F0 (_LdrpAccessResourceDataNoMultipleLanguage@16.c)
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrpGetAlternateResourceModuleHandleEx@16 @ 0x4B33F505 (_LdrpGetAlternateResourceModuleHandleEx@16.c)
 *     _LdrpGetImageSize@8 @ 0x4B33F62D (_LdrpGetImageSize@8.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 */

int __stdcall LdrpAccessResourceData(unsigned int BaseOfImage, unsigned int a2, int a3, int a4)
{
  _DWORD *SharedData; // eax
  int v5; // eax
  int v6; // ebx
  PVOID v7; // esi
  int v8; // esi
  _DWORD *v9; // eax
  int v10; // eax
  int v12; // eax
  PVOID v13; // eax
  void *AlternateResourceModuleHandle; // eax
  int v15; // [esp+10h] [ebp-10h] BYREF
  unsigned int v16; // [esp+14h] [ebp-Ch]
  int v17; // [esp+18h] [ebp-8h] BYREF
  ULONG Size; // [esp+1Ch] [ebp-4h] BYREF

  v17 = 0;
  v15 = 0;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v5 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v5 = 2147353477;
  v6 = 2147353476;
  if ( (*(_BYTE *)v5 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v12 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v12 = 2147353476;
    LdrpTraceLoadMUIDll(&dword_4B281BF0, *(unsigned __int8 *)v12);
  }
  v7 = (PVOID)BaseOfImage;
  if ( !BaseOfImage || !a2 )
    return -1073741811;
  if ( NtCurrentTeb()->ResourceRetValue
    && *(_DWORD *)NtCurrentTeb()->ResourceRetValue == BaseOfImage
    && *((_DWORD *)NtCurrentTeb()->ResourceRetValue + 1) == a2 )
  {
    v7 = (PVOID)*((_DWORD *)NtCurrentTeb()->ResourceRetValue + 2);
LABEL_10:
    v8 = LdrpAccessResourceDataNoMultipleLanguage(v7, a3, a4);
    goto LABEL_11;
  }
  v16 = BaseOfImage & 0xFFFFFFFC;
  v13 = RtlImageDirectoryEntryToData((PVOID)BaseOfImage, 1u, 2u, &Size);
  if ( !v13 )
  {
    v8 = -1073741687;
    goto LABEL_11;
  }
  if ( a2 < (unsigned int)v13 )
  {
LABEL_28:
    AlternateResourceModuleHandle = (void *)LdrpGetAlternateResourceModuleHandleEx(a2, &v17);
    if ( AlternateResourceModuleHandle && AlternateResourceModuleHandle != (void *)-1 )
      v7 = AlternateResourceModuleHandle;
    goto LABEL_10;
  }
  Size = LdrpGetImageSize(BaseOfImage, &v15);
  if ( Size != -1073741701 )
  {
    if ( !v15 || a2 >= v16 && a2 < v15 + v16 )
      goto LABEL_10;
    goto LABEL_28;
  }
  v8 = -1073741701;
LABEL_11:
  v9 = NtCurrentPeb()->SharedData;
  if ( v9 && *v9 )
    v10 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v10 = 2147353477;
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (int)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(&dword_4B281C00, *(unsigned __int8 *)v6);
  }
  return v8;
}
