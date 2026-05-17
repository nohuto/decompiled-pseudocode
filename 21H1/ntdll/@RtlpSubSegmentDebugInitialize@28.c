/*
 * XREFs of @RtlpSubSegmentDebugInitialize@28 @ 0x4B370CFD
 * Callers:
 *     @RtlpSubSegmentInitialize@24 @ 0x4B2C37B0 (@RtlpSubSegmentInitialize@24.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpLogHeapSubSegmentInitialize@20 @ 0x4B36F4DC (_RtlpLogHeapSubSegmentInitialize@20.c)
 *     @RtlpGetFirstBlockAddress@8 @ 0x4B370C0F (@RtlpGetFirstBlockAddress@8.c)
 *     @RtlpProtectBlock@8 @ 0x4B370C9F (@RtlpProtectBlock@8.c)
 *     _RtlpInitializeLfhBitmapData@4 @ 0x4B379B79 (_RtlpInitializeLfhBitmapData@4.c)
 */

int __fastcall RtlpSubSegmentDebugInitialize(int a1, int a2, int *a3, __int16 a4, int a5, int a6, int a7)
{
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  unsigned int v13; // edx
  _DWORD *v14; // ecx
  unsigned __int16 v15; // di
  int v16; // edx
  int *v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // edi
  int v20; // esi
  _DWORD *v21; // esi
  unsigned int *v22; // esi
  signed __int64 v23; // rax
  unsigned int v24; // edi
  unsigned int v25; // ecx
  _DWORD *v26; // ecx
  int v27; // eax
  int v28; // edi
  signed __int32 v29; // ecx
  signed __int32 v30; // eax
  int v31; // eax
  signed __int32 v32; // [esp+4h] [ebp-28h] BYREF
  signed __int32 v33; // [esp+8h] [ebp-24h]
  int v34; // [esp+Ch] [ebp-20h]
  int v35; // [esp+10h] [ebp-1Ch]
  unsigned int v36; // [esp+14h] [ebp-18h]
  signed __int32 v37; // [esp+18h] [ebp-14h]
  int v38; // [esp+1Ch] [ebp-10h]
  _DWORD *v39; // [esp+20h] [ebp-Ch]
  int v40; // [esp+24h] [ebp-8h]
  unsigned int v41; // [esp+28h] [ebp-4h]

  v38 = a1;
  v34 = a2;
  if ( (a4 & 3) == 0 )
    return 0;
  v10 = *(unsigned __int8 *)(a2 + 27);
  v11 = *(unsigned __int8 *)(a7 + 2);
  v33 = *(_DWORD *)(a2 + 16);
  if ( v10 )
    v12 = 104 * v10 + *(_DWORD *)(a1 + 4 * v11 + 1476) - 104;
  else
    v12 = *(_DWORD *)(a1 + 4 * v11 + 960);
  v39 = (_DWORD *)v12;
  v41 = ((a5 + 4103) & 0xFFFFF000) + 4096;
  *a3 = a2;
  v13 = ((unsigned int)a3 + a6 - (((unsigned int)a3 + 4127) & 0xFFFFF000)) / v41;
  v14 = v39;
  *(_WORD *)(a2 + 20) = (unsigned int)(a5 + 8) >> 3;
  v35 = (unsigned __int16)v13;
  *(_WORD *)(a2 + 24) = v13;
  *(_DWORD *)a2 = v14;
  v40 = v13;
  *(_BYTE *)(a2 + 26) = *(_BYTE *)(a7 + 2);
  *(_WORD *)(a2 + 22) = a4;
  HIWORD(v37) = v41;
  v15 = RtlpGetFirstBlockAddress((unsigned __int16 *)a2, ((unsigned int)a3 + 4127) & 0xFFFFF000) - (_WORD)a3;
  v16 = v40;
  LOWORD(v37) = v15;
  a3[4] = (unsigned int)a3 ^ v38 ^ v37 ^ RtlpLFHKey;
  a3[5] = v16;
  a3[6] = (int)(a3 + 7);
  RtlpInitializeLfhBitmapData();
  v17 = a3;
  LOWORD(v18) = 0;
  v19 = (unsigned int)a3 + v15;
  v37 = 0;
  if ( v40 )
  {
    v36 = v41 << 13;
    v20 = (v19 - (_DWORD)a3) << 13;
    do
    {
      *(_DWORD *)v19 = *(_DWORD *)(v38 + 12) ^ RtlpLFHKey ^ v20 ^ (v19 >> 3);
      *(_DWORD *)(v19 + 4) = *(_DWORD *)(v19 + 4) & 0xFF0000FF | ((unsigned __int16)v18 << 8);
      *(_BYTE *)(v19 + 7) = 0x80;
      RtlpProtectBlock(a2, v19);
      v19 += v41;
      v20 += v36;
      v18 = v37 + 1;
      v37 = v18;
    }
    while ( v18 < v40 );
    v17 = a3;
  }
  v21 = v39;
  *(_DWORD *)(a2 + 4) = v17;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  v22 = v21 + 20;
  do
  {
    LODWORD(v23) = *v22;
    v24 = v22[1];
    v36 = *v22;
    v25 = v24 + 1;
    if ( v40 <= 0 )
      v25 = v24 - 1;
    HIDWORD(v23) = v24;
  }
  while ( _InterlockedCompareExchange64((volatile signed __int64 *)v22, __SPAIR64__(v25, (int)v23 + v40), v23) != __PAIR64__(v24, v36) );
  v26 = v39;
  v37 = 0;
  v27 = *v39;
  v26[22] = ++*(_DWORD *)(v27 + 16);
  LOWORD(v37) = v35;
  _InterlockedOr(&v32, 0);
  v28 = v34;
  v29 = v37;
  a3[3] = -253701952;
  v30 = v33;
  *(_DWORD *)(v28 + 28) = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(v28 + 16), v29, v30);
  if ( RtlGetCurrentServiceSessionId() )
    v31 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v31 = 2147353472;
  if ( *(_BYTE *)v31 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentInitialize(
        *(_DWORD *)(v38 + 12),
        *(_DWORD *)(v28 + 4),
        *(unsigned __int16 *)(v28 + 20),
        *(unsigned __int16 *)(v28 + 24),
        *(unsigned __int8 *)(v28 + 27));
  }
  return 1;
}
