/*
 * XREFs of ?bCopySection@@YGHPAX0K@Z @ 0x1E8BF7
 * Callers:
 *     ?vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z @ 0x8CD1A (-vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@@YGJPAU_UNICODE_STRING@@PAU_FILEVIEW@@PAU_OBJECT_ATTRIBUTES@@PAT_LARGE_INTEGER@@_N@Z @ 0x1E89E2 (-ObtainSectionForNetworkedFontFile@@YGJPAU_UNICODE_STRING@@PAU_FILEVIEW@@PAU_OBJECT_ATTRIBUTES@@.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

BOOL __userpurge bCopySection@<eax>(int a1@<edx>, int a2@<ecx>, char *a3, void *a4, unsigned int a5)
{
  char *v5; // ebx
  int v6; // esi
  int CurrentProcess; // eax
  int v8; // eax
  char *v9; // ecx
  size_t v10; // esi
  size_t v11; // eax
  int v12; // eax
  int v13; // eax
  void *v15; // [esp-4h] [ebp-64h]
  void *v16; // [esp-4h] [ebp-64h]
  _DWORD v17[2]; // [esp+10h] [ebp-50h] BYREF
  _DWORD v18[2]; // [esp+18h] [ebp-48h] BYREF
  char *v19; // [esp+20h] [ebp-40h]
  int v20; // [esp+24h] [ebp-3Ch]
  int v21; // [esp+28h] [ebp-38h]
  char *v22; // [esp+2Ch] [ebp-34h]
  int v23; // [esp+30h] [ebp-30h]
  int v24; // [esp+34h] [ebp-2Ch]
  size_t v25; // [esp+38h] [ebp-28h] BYREF
  unsigned int v26; // [esp+3Ch] [ebp-24h] BYREF
  void *Src; // [esp+40h] [ebp-20h] BYREF
  void *v28; // [esp+44h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]

  v20 = a1;
  v21 = a2;
  v5 = a3;
  v24 = 0;
  v23 = 0;
  while ( 1 )
  {
    v22 = v5;
    if ( !v5 )
      break;
    v6 = 0x10000;
    if ( (unsigned int)v5 <= 0x10000 )
      v6 = (int)v5;
    v19 = (char *)(a3 - v5);
    v18[0] = a3 - v5;
    v18[1] = 0;
    v17[0] = a3 - v5;
    v17[1] = 0;
    v28 = 0;
    Src = 0;
    v26 = 0;
    v25 = 0;
    CurrentProcess = PsGetCurrentProcess();
    if ( (int)MmMapViewOfSection(v21, CurrentProcess, &v28, 0, v6, v18, &v26, 2, 0x400000, 4) < 0 )
    {
      v28 = 0;
      v26 = 0;
    }
    if ( v26 )
    {
      v8 = PsGetCurrentProcess();
      if ( (int)MmMapViewOfSection(v20, v8, &Src, 0, v6, v17, &v25, 2, 0x400000, 2) < 0 )
      {
        Src = 0;
        v25 = 0;
      }
    }
    if ( v26 && v25 )
    {
      v9 = &v19[-v17[0]];
      v28 = &v19[(_DWORD)v28 - v18[0]];
      Src = &v19[(_DWORD)Src - v17[0]];
      if ( v26 <= (unsigned int)&v19[-v18[0]] )
        v10 = 0;
      else
        v10 = v26 - (_DWORD)&v19[-v18[0]];
      v26 = v10;
      if ( v25 <= (unsigned int)v9 )
        v11 = 0;
      else
        v11 = v25 - (_DWORD)v9;
      v25 = v11;
      if ( v10 >= v11 )
        v10 = v11;
      if ( v10 >= (unsigned int)v5 )
        v10 = (size_t)v5;
      ms_exc.registration.TryLevel = 0;
      memcpy(v28, Src, v10);
      ms_exc.registration.TryLevel = -2;
    }
    else
    {
      v10 = 0;
    }
    if ( v28 )
    {
      v15 = v28;
      v12 = PsGetCurrentProcess();
      if ( (int)MmUnmapViewOfSection(v12, v15) < 0 )
        v24 = 1;
    }
    if ( Src )
    {
      v16 = Src;
      v13 = PsGetCurrentProcess();
      if ( (int)MmUnmapViewOfSection(v13, v16) < 0 )
        v23 = 1;
    }
    if ( !v10 || v24 == 1 || v23 == 1 )
      break;
    v5 -= v10;
  }
  return v5 == 0;
}
