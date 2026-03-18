/*
 * XREFs of ?PostHidInput@@YGHPAUDEVICEINFO@@PAUtagQ@@PAUtagWND@@I@Z @ 0x143C5D
 * Callers:
 *     _xxxProcessHidInput@4 @ 0x144ADA (_xxxProcessHidInput@4.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?DeliverRawInput@RIM@InputTraceLogging@@SGXPBURIMDEV@@_N@Z @ 0x143AF1 (-DeliverRawInput@RIM@InputTraceLogging@@SGXPBURIMDEV@@_N@Z.c)
 *     _AllocateHidData@20 @ 0x14415B (_AllocateHidData@20.c)
 *     _FreeHidData@4 @ 0x144291 (_FreeHidData@4.c)
 */

int __userpurge PostHidInput@<eax>(
        _DWORD *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct DEVICEINFO *a3,
        struct tagQ *a4,
        struct tagWND *a5,
        unsigned int a6)
{
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  unsigned int *HidData; // eax
  unsigned int *v11; // ebx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  size_t v17; // eax
  unsigned int v18; // eax
  char *v19; // eax
  int v20; // esi
  int i; // ecx
  char *v22; // esi
  int j; // ecx
  unsigned int v24; // esi
  int k; // ecx
  int v26; // ecx
  _DWORD *v27; // esi
  size_t v28; // esi
  int m; // ecx
  int v30; // esi
  int n; // ecx
  int v32; // esi
  int ii; // ecx
  unsigned int v35; // [esp+0h] [ebp-20h]
  unsigned int *v36; // [esp+4h] [ebp-1Ch]
  unsigned int v38; // [esp+10h] [ebp-10h]
  int v39; // [esp+10h] [ebp-10h]
  int v40; // [esp+14h] [ebp-Ch]
  int v41; // [esp+14h] [ebp-Ch]
  size_t MaxCount; // [esp+18h] [ebp-8h]
  size_t MaxCounta; // [esp+18h] [ebp-8h]
  unsigned int v44; // [esp+1Ch] [ebp-4h] BYREF

  v44 = 0;
  v7 = a2[69];
  v8 = a2[39];
  MaxCount = v8;
  v9 = *(unsigned __int16 *)(v7 + 24);
  v38 = v9;
  if ( v8 % v9 )
    return 0;
  v40 = v8 / v9;
  if ( !(v8 / v9) )
    return 0;
  if ( (ULongAdd(v8, 8u, (int *)&v44, v35, v36) & 0x80000000) != 0 )
    return 0;
  HidData = (unsigned int *)AllocateHidData(*a2, 2, v44, a4, a3);
  v11 = HidData;
  if ( !HidData )
    return 0;
  HidData[8] = v38;
  HidData[9] = v40;
  memcpy(HidData + 10, *(const void **)(a2[69] + 12), MaxCount);
  InputTraceLogging::RIM::DeliverRawInput((int)a2, a4 == (struct tagQ *)1);
  if ( a3 )
    v12 = *((_DWORD *)a3 + 2);
  else
    v12 = 0;
  v13 = a1[16];
  if ( v13 )
    v14 = *(_DWORD *)(v13 + 8);
  else
    v14 = 0;
  if ( v14 )
    v39 = v14 + 216;
  else
    v39 = gObjDummyLock;
  v15 = a1[12];
  if ( v15 )
    v41 = v15 + 216;
  else
    v41 = gObjDummyLock;
  v16 = a1[13];
  if ( v16 )
    v17 = v16 + 216;
  else
    v17 = gObjDummyLock;
  MaxCounta = v17;
  v18 = gObjDummyLock;
  if ( v12 )
    v18 = v12 + 216;
  v44 = v18;
  v19 = (char *)gObjDummyLock;
  if ( a3 )
    v19 = (char *)a3 + 28;
  v20 = gpsiLock;
  for ( i = 3; i; --i )
    v20 += 4;
  v22 = v19;
  for ( j = 3; j; --j )
    v22 += 4;
  v24 = v44;
  for ( k = 3; k; --k )
    v24 += 4;
  v26 = 3;
  v27 = a1;
  while ( v26 )
  {
    ++v27;
    --v26;
  }
  v28 = MaxCounta;
  for ( m = 3; m; --m )
    v28 += 4;
  v30 = v41;
  for ( n = 3; n; --n )
    v30 += 4;
  v32 = v39;
  for ( ii = 3; ii; --ii )
    v32 += 4;
  if ( !PostInputMessage((int)a1, (int)a3, (struct tagQMSG *)0xFF, a4, *v11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) )
  {
    FreeHidData(v11);
    return 0;
  }
  return 1;
}
