/*
 * XREFs of _RtlpChangeQueryDebugBufferTarget@16 @ 0x4B3376D2
 * Callers:
 *     _RtlDestroyQueryDebugBuffer@4 @ 0x4B3369C0 (_RtlDestroyQueryDebugBuffer@4.c)
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 *     _RtlSetProcessDebugInformation@12 @ 0x4B337540 (_RtlSetProcessDebugInformation@12.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenProcess@16 @ 0x4B2F2BE0 (_ZwOpenProcess@16.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 */

int __fastcall RtlpChangeQueryDebugBufferTarget(int *a1, int a2, int a3, HANDLE *a4)
{
  HANDLE v5; // ecx
  int v7; // eax
  _DWORD *v8; // ebx
  int result; // eax
  int v10; // eax
  int v11; // edi
  int *v12; // edi
  int v13; // edx
  int v14; // eax
  int v15; // eax
  _DWORD v16[6]; // [esp+10h] [ebp-48h] BYREF
  _DWORD v17[2]; // [esp+28h] [ebp-30h] BYREF
  _DWORD v18[2]; // [esp+30h] [ebp-28h] BYREF
  _DWORD v19[3]; // [esp+38h] [ebp-20h] BYREF
  int v20; // [esp+44h] [ebp-14h]
  int v21; // [esp+48h] [ebp-10h]
  int v22; // [esp+4Ch] [ebp-Ch] BYREF
  HANDLE Handle; // [esp+50h] [ebp-8h] BYREF
  HANDLE v24; // [esp+54h] [ebp-4h] BYREF

  v16[0] = 24;
  v5 = 0;
  memset(&v16[1], 0, 20);
  v7 = a1[6];
  v8 = (int *)((char *)a1 + a1[11]);
  v20 = a2;
  if ( v7 )
  {
    v18[0] = v7;
    v18[1] = 0;
    result = ZwOpenProcess((int)&Handle, 0x1FFFFF, (int)v16, (int)v18);
    if ( result < 0 )
      return result;
    v10 = (int)Handle;
    v5 = 0;
  }
  else
  {
    v10 = -1;
    Handle = (HANDLE)-1;
  }
  if ( a2 )
  {
    v17[0] = a2;
    v17[1] = 0;
    v11 = ZwOpenProcess((int)&v24, 0x1FFFFF, (int)v16, (int)v17);
    if ( v11 < 0 )
    {
      if ( Handle != (HANDLE)-1 )
        NtClose(Handle);
      return v11;
    }
    v10 = (int)Handle;
    v5 = v24;
  }
  else
  {
    v24 = 0;
  }
  v12 = a1 + 2;
  if ( v10 == -1 )
  {
    v13 = a1[11];
    *v12 = v13 + a1[1];
  }
  else
  {
    if ( *v12 )
    {
      NtUnmapViewOfSection(v10, *v12);
      v10 = (int)Handle;
      *v12 = 0;
    }
    NtClose((HANDLE)v10);
    v13 = a1[11];
    v5 = v24;
  }
  v19[1] = 0;
  v22 = v13;
  v19[0] = v13;
  if ( v5 )
  {
    v14 = ZwMapViewOfSection(*a1, (int)v5, (int)(a1 + 2), 0, 0, (int)v19, (int)&v22, 2, 0, 4);
    v21 = v14;
    if ( v14 == -1073741800 )
    {
      *v12 = 0;
      v14 = ZwMapViewOfSection(*a1, (int)v24, (int)(a1 + 2), 0, 0, (int)v19, (int)&v22, 2, 0, 4);
      v21 = v14;
    }
    if ( v14 < 0 )
    {
      NtClose(v24);
      return v21;
    }
    if ( a4 )
      *a4 = v24;
    else
      NtClose(v24);
  }
  a1[6] = v20;
  a1[3] = (int)a1 - *v12;
  if ( a3 == 1 )
  {
    *v8 = 0;
    v8[1] = *v12;
    v8[2] = *v12;
    v8[3] = a1[3];
    v8[4] = a1[4];
    v8[5] = a1[5];
    v8[6] = a1[6];
    v8[7] = a1[7];
    v8[8] = a1[8];
    v8[9] = a1[9];
    v8[10] = a1[10];
    v8[11] = a1[11];
    v8[20] = a1[20];
  }
  else
  {
    qmemcpy(v8, a1, 0x68u);
    v15 = v8[2];
    *v8 = 0;
    v8[1] = v15;
  }
  return 0;
}
