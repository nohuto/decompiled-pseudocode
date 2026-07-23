/*
 * XREFs of _LdrEnumResources@20 @ 0x4B33EF20
 * Callers:
 *     <none>
 * Callees:
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _LdrpCompareResourceNamesWithValidation@24 @ 0x4B306D17 (_LdrpCompareResourceNamesWithValidation@24.c)
 */

NTSTATUS __cdecl LdrEnumResources(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        ULONG *ResourceCount,
        PLDR_ENUM_RESOURCE_ENTRY Resources)
{
  ULONG v5; // edi
  unsigned __int16 *v6; // eax
  int v7; // esi
  int v9; // ecx
  int v10; // eax
  bool v11; // zf
  int *v12; // ebx
  NTSTATUS v13; // ecx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int *v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int *v24; // edx
  int *v25; // ecx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  ULONG Size; // [esp+8h] [ebp-3Ch] BYREF
  unsigned int v31; // [esp+Ch] [ebp-38h]
  unsigned int v32; // [esp+10h] [ebp-34h]
  int v33; // [esp+14h] [ebp-30h]
  int *v34; // [esp+18h] [ebp-2Ch]
  int v35; // [esp+1Ch] [ebp-28h]
  int v36; // [esp+20h] [ebp-24h]
  unsigned int v37; // [esp+24h] [ebp-20h]
  int v38; // [esp+28h] [ebp-1Ch]
  ULONG v39; // [esp+2Ch] [ebp-18h]
  int *v40; // [esp+30h] [ebp-14h]
  int *v41; // [esp+34h] [ebp-10h]
  ULONG v42; // [esp+38h] [ebp-Ch]
  int v43; // [esp+3Ch] [ebp-8h]
  char v44; // [esp+41h] [ebp-3h] BYREF
  char v45; // [esp+42h] [ebp-2h] BYREF
  char v46; // [esp+43h] [ebp-1h] BYREF

  v5 = 0;
  v42 = 0;
  if ( Resources )
    v39 = *ResourceCount;
  else
    v39 = 0;
  *ResourceCount = 0;
  v6 = (unsigned __int16 *)RtlImageDirectoryEntryToData(DllHandle, 1u, 2u, &Size);
  v7 = (int)v6;
  if ( !v6 )
    return -1073741687;
  v9 = v6[7];
  v10 = v6[6];
  v11 = v10 + v9 == 0;
  v35 = 0;
  Size = v10 + v9;
  v12 = (int *)(v7 + 16);
  v13 = 0;
  v34 = (int *)(v7 + 16);
  v33 = 0;
  if ( v11 )
  {
LABEL_38:
    *ResourceCount = v5;
    return v13;
  }
  while ( Level && LdrpCompareResourceNamesWithValidation(0, 0, (wchar_t *)ResourceInfo->Type, v7, v12, &v46) )
  {
LABEL_36:
    v12 += 2;
    v34 = v12;
    if ( ++v35 >= Size )
    {
      v5 = v42;
      v13 = v33;
      goto LABEL_38;
    }
  }
  v14 = v12[1];
  if ( v14 < 0 )
  {
    v15 = *v12;
    if ( *v12 >= 0 )
      v15 = (unsigned __int16)v15;
    else
      v15 = v7 + (v15 & 0x7FFFFFFF);
    v16 = v14 & 0x7FFFFFFF;
    v36 = 0;
    v17 = (int *)(v16 + v7 + 16);
    v40 = v17;
    v31 = *(unsigned __int16 *)(v16 + v7 + 12) + *(unsigned __int16 *)(v16 + v7 + 14);
    if ( v31 )
    {
      while ( 1 )
      {
        if ( Level <= 1
          || (v18 = LdrpCompareResourceNamesWithValidation(0, 0, (wchar_t *)HIDWORD(ResourceInfo->Type), v7, v17, &v45),
              v17 = v40,
              !v18) )
        {
          v19 = v17[1];
          if ( v19 >= 0 )
            return -1073741701;
          v20 = *v17;
          v20 = *v17 >= 0 ? (unsigned __int16)v20 : v7 + (v20 & 0x7FFFFFFF);
          v21 = v19 & 0x7FFFFFFF;
          v37 = 0;
          v43 = v21 + v7 + 16;
          v22 = *(unsigned __int16 *)(v21 + v7 + 14);
          v23 = *(unsigned __int16 *)(v21 + v7 + 12);
          v11 = v23 + v22 == 0;
          v32 = v23 + v22;
          v24 = (int *)v43;
          if ( !v11 )
            break;
        }
LABEL_34:
        v17 += 2;
        v40 = v17;
        if ( ++v36 >= v31 )
        {
          v12 = v34;
          goto LABEL_36;
        }
      }
      v25 = (int *)((char *)Resources + 24 * v42);
      v41 = v25;
      while ( 2 )
      {
        if ( Level <= 2 )
        {
LABEL_25:
          v38 = v24[1];
          if ( v38 < 0 )
            return -1073741701;
          v27 = *v24;
          if ( *v24 >= 0 )
            v27 = (unsigned __int16)v27;
          else
            v27 = v7 + (v27 & 0x7FFFFFFF);
          ++v42;
          v41 += 6;
          v24 = (int *)v43;
          if ( v42 > v39 )
          {
            v33 = -1073741820;
          }
          else
          {
            v25[2] = v27;
            v28 = v38;
            *v25 = v15;
            v25[1] = v20;
            v25[3] = (int)DllHandle + *(_DWORD *)(v28 + v7);
            v29 = *(_DWORD *)(v38 + v7 + 4);
            v25[5] = 0;
            v25[4] = v29;
          }
        }
        else
        {
          v26 = LdrpCompareResourceNamesWithValidation(0, 0, (wchar_t *)ResourceInfo->Name, v7, v24, &v44);
          v24 = (int *)v43;
          if ( !v26 )
          {
            v25 = v41;
            goto LABEL_25;
          }
        }
        v24 += 2;
        v25 = v41;
        ++v37;
        v43 = (int)v24;
        if ( v37 >= v32 )
        {
          v17 = v40;
          goto LABEL_34;
        }
        continue;
      }
    }
    goto LABEL_36;
  }
  return -1073741701;
}
