/*
 * XREFs of _RtlpFcMapBuffers@8 @ 0x4B2E4F70
 * Callers:
 *     _RtlpFcUpdateLocalConfiguration@16 @ 0x4B2E4FCD (_RtlpFcUpdateLocalConfiguration@16.c)
 * Callees:
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _RtlpFcSectionTypeToBufferType@4 @ 0x4B3A10ED (_RtlpFcSectionTypeToBufferType@4.c)
 */

NTSTATUS __fastcall RtlpFcMapBuffers(int a1, int a2)
{
  int v2; // esi
  int v3; // ebx
  unsigned int v4; // edx
  unsigned int v5; // edx
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // eax
  NTSTATUS result; // eax
  SIZE_T v10; // [esp-14h] [ebp-30h]
  ULONG v11; // [esp+0h] [ebp-1Ch]
  ULONG v12; // [esp+4h] [ebp-18h]
  int v14; // [esp+10h] [ebp-Ch] BYREF
  unsigned int v15; // [esp+14h] [ebp-8h]
  PVOID BaseAddress; // [esp+18h] [ebp-4h] BYREF

  v2 = a2;
  v3 = a1 + 8;
  v4 = 0;
  v15 = 0;
  while ( 1 )
  {
    v6 = (_DWORD *)(16 * RtlpFcSectionTypeToBufferType(v4) + v2);
    if ( *(_DWORD *)(v3 + 8) )
      break;
    *v6 = 0;
    v7 = 0;
    v6[1] = 0;
    v6[2] = 0;
LABEL_4:
    v6[3] = v7;
    v4 = v5 + 1;
    *v6 = *(_DWORD *)v3;
    v8 = *(_DWORD *)(v3 + 4);
    v3 += 16;
    v6[1] = v8;
    result = 0;
    v2 = a2;
    v15 = v4;
    if ( v4 >= 3 )
      return result;
  }
  BaseAddress = 0;
  HIDWORD(v10) = &v14;
  LODWORD(v10) = 0;
  v14 = 0;
  result = ZwMapViewOfSection(
             *(HANDLE *)(v3 + 8),
             (HANDLE)0xFFFFFFFF,
             &BaseAddress,
             0LL,
             v10,
             (PLARGE_INTEGER)2,
             0,
             ViewUnmap,
             v11,
             v12);
  if ( result >= 0 )
  {
    v5 = v15;
    *v6 = 0;
    v6[1] = 0;
    v6[2] = 0;
    v6[3] = 0;
    v6[2] = BaseAddress;
    v7 = *(_DWORD *)(v3 + 12);
    goto LABEL_4;
  }
  return result;
}
