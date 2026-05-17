/*
 * XREFs of _RtlpFcMapBuffers@8 @ 0x4B2E4F70
 * Callers:
 *     _RtlpFcUpdateLocalConfiguration@16 @ 0x4B2E4FCD (_RtlpFcUpdateLocalConfiguration@16.c)
 * Callees:
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _RtlpFcSectionTypeToBufferType@4 @ 0x4B3A10ED (_RtlpFcSectionTypeToBufferType@4.c)
 */

int __fastcall RtlpFcMapBuffers(int a1, int a2)
{
  int v2; // esi
  _DWORD *v3; // ebx
  unsigned int v4; // edx
  unsigned int v5; // edx
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // eax
  int result; // eax
  int v11; // [esp+10h] [ebp-Ch] BYREF
  unsigned int v12; // [esp+14h] [ebp-8h]
  int v13; // [esp+18h] [ebp-4h] BYREF

  v2 = a2;
  v3 = (_DWORD *)(a1 + 8);
  v4 = 0;
  v12 = 0;
  while ( 1 )
  {
    v6 = (_DWORD *)(16 * RtlpFcSectionTypeToBufferType(v4) + v2);
    if ( v3[2] )
      break;
    *v6 = 0;
    v7 = 0;
    v6[1] = 0;
    v6[2] = 0;
LABEL_4:
    v6[3] = v7;
    v4 = v5 + 1;
    *v6 = *v3;
    v8 = v3[1];
    v3 += 4;
    v6[1] = v8;
    result = 0;
    v2 = a2;
    v12 = v4;
    if ( v4 >= 3 )
      return result;
  }
  v13 = 0;
  v11 = 0;
  result = ZwMapViewOfSection(v3[2], -1, &v13, 0, 0, 0, &v11, 2, 0, 2);
  if ( result >= 0 )
  {
    v5 = v12;
    *v6 = 0;
    v6[1] = 0;
    v6[2] = 0;
    v6[3] = 0;
    v6[2] = v13;
    v7 = v3[3];
    goto LABEL_4;
  }
  return result;
}
