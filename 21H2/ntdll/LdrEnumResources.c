/*
 * XREFs of LdrEnumResources @ 0x1800E0C90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x18009CAEC (LdrpCompareResourceNamesWithValidation.c)
 */

NTSTATUS __cdecl LdrEnumResources(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        ULONG *ResourceCount,
        PLDR_ENUM_RESOURCE_ENTRY Resources)
{
  unsigned int v5; // r13d
  ULONG v7; // esi
  const wchar_t **v8; // r15
  ULONG v9; // edi
  NTSTATUS v10; // eax
  __int64 v11; // rbx
  int v13; // ecx
  int *v14; // r14
  int v15; // eax
  NTSTATUS v16; // ebp
  bool v17; // zf
  unsigned int v18; // ecx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdi
  ULONG_PTR v22; // rdi
  int *v23; // rbp
  int v24; // edx
  int v25; // eax
  unsigned int v26; // edx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rsi
  ULONG_PTR v30; // rsi
  int *v31; // r15
  __int64 v32; // rcx
  ULONG_PTR v33; // rcx
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  PLDR_ENUM_RESOURCE_ENTRY v36; // r9
  char v37; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v38[3]; // [rsp+31h] [rbp-77h] BYREF
  unsigned int v39; // [rsp+34h] [rbp-74h]
  unsigned int v40; // [rsp+38h] [rbp-70h]
  ULONG v41; // [rsp+3Ch] [rbp-6Ch]
  ULONG v42; // [rsp+40h] [rbp-68h]
  unsigned int v43; // [rsp+44h] [rbp-64h]
  int v44; // [rsp+48h] [rbp-60h]
  int v45; // [rsp+4Ch] [rbp-5Ch]
  __int64 v46; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v50; // [rsp+C8h] [rbp+20h] BYREF

  v5 = 0;
  v7 = Level;
  v8 = (const wchar_t **)ResourceInfo;
  v9 = 0;
  v41 = 0;
  if ( Resources )
    v42 = *ResourceCount;
  else
    v42 = 0;
  *ResourceCount = 0;
  v10 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)DllHandle, 1, 2u, &v50, (char **)&v46);
  v11 = v46;
  if ( v10 < 0 )
    v11 = 0LL;
  if ( !v11 )
    return -1073741687;
  v13 = *(unsigned __int16 *)(v11 + 14);
  v14 = (int *)(v11 + 16);
  v15 = *(unsigned __int16 *)(v11 + 12);
  v16 = 0;
  v17 = v15 + v13 == 0;
  v18 = v15 + v13;
  v45 = 0;
  v40 = v18;
  v44 = 0;
  if ( v17 )
  {
LABEL_39:
    *ResourceCount = v9;
    return v16;
  }
  while ( v7 )
  {
    v19 = LdrpCompareResourceNamesWithValidation(0LL, 0LL, *v8, v11, v14, &v50);
    v18 = v40;
    if ( !v19 )
      break;
LABEL_37:
    v14 += 2;
    if ( ++v44 >= v18 )
    {
      v9 = v41;
      v16 = v45;
      goto LABEL_39;
    }
  }
  v20 = (unsigned int)v14[1];
  if ( (int)v20 < 0 )
  {
    v21 = (unsigned int)*v14;
    if ( (int)v21 >= 0 )
    {
      v22 = *(unsigned __int16 *)v14;
    }
    else
    {
      LODWORD(v21) = v21 & 0x7FFFFFFF;
      v22 = v11 + v21;
    }
    LODWORD(v20) = v20 & 0x7FFFFFFF;
    v43 = 0;
    v23 = (int *)(v20 + v11 + 16);
    v24 = *(unsigned __int16 *)(v20 + v11 + 14);
    v25 = *(unsigned __int16 *)(v20 + v11 + 12);
    v17 = v25 + v24 == 0;
    v26 = v25 + v24;
    v39 = v26;
    if ( !v17 )
    {
      do
      {
        if ( v7 <= 1 || (v27 = LdrpCompareResourceNamesWithValidation(0LL, 0LL, v8[1], v11, v23, &v37), v26 = v39, !v27) )
        {
          v28 = (unsigned int)v23[1];
          if ( (int)v28 >= 0 )
            return -1073741701;
          v29 = (unsigned int)*v23;
          if ( (int)v29 >= 0 )
          {
            v30 = *(unsigned __int16 *)v23;
          }
          else
          {
            LODWORD(v29) = v29 & 0x7FFFFFFF;
            v30 = v11 + v29;
          }
          LODWORD(v28) = v28 & 0x7FFFFFFF;
          v31 = (int *)(v28 + v11 + 16);
          LODWORD(v46) = *(unsigned __int16 *)(v28 + v11 + 12) + *(unsigned __int16 *)(v28 + v11 + 14);
          if ( (_DWORD)v46 )
          {
            do
            {
              if ( Level <= 2
                || !(unsigned int)LdrpCompareResourceNamesWithValidation(
                                    0LL,
                                    0LL,
                                    (const wchar_t *)ResourceInfo->Language,
                                    v11,
                                    v31,
                                    v38) )
              {
                if ( v31[1] < 0 )
                  return -1073741701;
                v32 = (unsigned int)*v31;
                if ( (int)v32 >= 0 )
                {
                  v33 = *(unsigned __int16 *)v31;
                }
                else
                {
                  LODWORD(v32) = v32 & 0x7FFFFFFF;
                  v33 = v11 + v32;
                }
                v34 = (unsigned int)v31[1];
                v35 = v41++;
                if ( v41 > v42 )
                {
                  v45 = -1073741820;
                }
                else
                {
                  v36 = Resources;
                  Resources[v35].Path[0].NameOrId = v22;
                  v36[v35].Path[1].NameOrId = v30;
                  v36[v35].Path[2].NameOrId = v33;
                  v36[v35].Data = (char *)DllHandle + *(unsigned int *)(v34 + v11);
                  *(_QWORD *)&v36[v35].Size = *(unsigned int *)(v34 + v11 + 4);
                }
              }
              ++v5;
              v31 += 2;
            }
            while ( v5 < (unsigned int)v46 );
            v26 = v39;
          }
          v8 = (const wchar_t **)ResourceInfo;
          v5 = 0;
          v7 = Level;
        }
        v23 += 2;
        ++v43;
      }
      while ( v43 < v26 );
      v18 = v40;
    }
    goto LABEL_37;
  }
  return -1073741701;
}
