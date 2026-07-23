/*
 * XREFs of LdrEnumResources @ 0x14090C0A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14033AA90 (RtlImageDirectoryEntryToData.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1403F1108 (LdrpCompareResourceNamesWithValidation.c)
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
  PLDR_RESOURCE_INFO v8; // r15
  ULONG v9; // edi
  unsigned __int16 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  int v14; // ecx
  unsigned int *v15; // r14
  int v16; // eax
  NTSTATUS v17; // ebp
  bool v18; // zf
  __int64 v19; // rcx
  const wchar_t *Type; // r8
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdi
  ULONG_PTR v24; // rdi
  unsigned int *v25; // rbp
  int v26; // edx
  int v27; // eax
  const wchar_t *Name; // r8
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rsi
  ULONG_PTR v32; // rsi
  unsigned int *v33; // r15
  int v34; // ecx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rcx
  PLDR_ENUM_RESOURCE_ENTRY v38; // r9
  unsigned int v39; // [rsp+30h] [rbp-68h]
  unsigned int v40; // [rsp+34h] [rbp-64h]
  ULONG v41; // [rsp+38h] [rbp-60h]
  ULONG v42; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v43; // [rsp+40h] [rbp-58h]
  int v44; // [rsp+44h] [rbp-54h]
  int v45; // [rsp+48h] [rbp-50h]
  unsigned int v46; // [rsp+4Ch] [rbp-4Ch]
  ULONG Size; // [rsp+B8h] [rbp+20h] BYREF

  v5 = 0;
  v7 = Level;
  v8 = ResourceInfo;
  v9 = 0;
  v41 = 0;
  if ( Resources )
    v42 = *ResourceCount;
  else
    v42 = 0;
  *ResourceCount = 0;
  v10 = (unsigned __int16 *)RtlImageDirectoryEntryToData(DllHandle, 1u, 2u, &Size);
  v12 = (__int64)v10;
  if ( !v10 )
    return -1073741687;
  v14 = v10[7];
  v15 = (unsigned int *)(v10 + 8);
  v16 = v10[6];
  v17 = 0;
  v18 = v16 + v14 == 0;
  v19 = (unsigned int)(v16 + v14);
  v45 = 0;
  v40 = v19;
  v44 = 0;
  if ( v18 )
  {
LABEL_37:
    *ResourceCount = v9;
    return v17;
  }
  while ( v7 )
  {
    Type = (const wchar_t *)v8->Type;
    LOBYTE(Size) = 0;
    v21 = LdrpCompareResourceNamesWithValidation(v19, v11, Type, v12, v15, &Size);
    v19 = v40;
    if ( !v21 )
      break;
LABEL_35:
    v15 += 2;
    if ( ++v44 >= (unsigned int)v19 )
    {
      v9 = v41;
      v17 = v45;
      goto LABEL_37;
    }
  }
  v22 = v15[1];
  if ( (int)v22 < 0 )
  {
    v23 = *v15;
    if ( (int)v23 >= 0 )
    {
      v24 = *(unsigned __int16 *)v15;
    }
    else
    {
      LODWORD(v23) = v23 & 0x7FFFFFFF;
      v24 = v12 + v23;
    }
    LODWORD(v22) = v22 & 0x7FFFFFFF;
    v43 = 0;
    v25 = (unsigned int *)(v22 + v12 + 16);
    v26 = *(unsigned __int16 *)(v22 + v12 + 14);
    v27 = *(unsigned __int16 *)(v22 + v12 + 12);
    v18 = v27 + v26 == 0;
    v11 = (unsigned int)(v27 + v26);
    v39 = v11;
    if ( !v18 )
    {
      do
      {
        if ( v7 <= 1
          || (Name = (const wchar_t *)v8->Name,
              LOBYTE(Size) = 0,
              v29 = LdrpCompareResourceNamesWithValidation(v19, v11, Name, v12, v25, &Size),
              v11 = v39,
              !v29) )
        {
          v30 = v25[1];
          if ( (int)v30 >= 0 )
            return -1073741701;
          v31 = *v25;
          if ( (int)v31 >= 0 )
          {
            v32 = *(unsigned __int16 *)v25;
          }
          else
          {
            LODWORD(v31) = v31 & 0x7FFFFFFF;
            v32 = v12 + v31;
          }
          LODWORD(v30) = v30 & 0x7FFFFFFF;
          v33 = (unsigned int *)(v30 + v12 + 16);
          v34 = *(unsigned __int16 *)(v30 + v12 + 14);
          v35 = *(unsigned __int16 *)(v30 + v12 + 12);
          v18 = v35 + v34 == 0;
          v19 = (unsigned int)(v35 + v34);
          v46 = v19;
          if ( !v18 )
          {
            do
            {
              if ( Level <= 2
                || (LOBYTE(Size) = 0,
                    !(unsigned int)LdrpCompareResourceNamesWithValidation(
                                     v19,
                                     v11,
                                     (const wchar_t *)ResourceInfo->Language,
                                     v12,
                                     v33,
                                     &Size)) )
              {
                v36 = v33[1];
                if ( (int)v36 < 0 )
                  return -1073741701;
                v37 = *v33;
                if ( (int)v37 >= 0 )
                {
                  v19 = *(unsigned __int16 *)v33;
                }
                else
                {
                  LODWORD(v37) = v37 & 0x7FFFFFFF;
                  v19 = v12 + v37;
                }
                v11 = 5LL * v41++;
                if ( v41 > v42 )
                {
                  v45 = -1073741820;
                }
                else
                {
                  v38 = Resources;
                  Resources->Path[v11].NameOrId = v24;
                  v38->Path[v11 + 1].NameOrId = v32;
                  v38->Path[v11 + 2].NameOrId = v19;
                  v38->Path[v11 + 3].NameOrId = (ULONG_PTR)DllHandle + *(unsigned int *)(v36 + v12);
                  *((_QWORD *)&v38->Size + v11) = *(unsigned int *)(v36 + v12 + 4);
                }
              }
              ++v5;
              v33 += 2;
            }
            while ( v5 < v46 );
            v11 = v39;
          }
          v8 = ResourceInfo;
          v5 = 0;
          v7 = Level;
        }
        v25 += 2;
        ++v43;
      }
      while ( v43 < (unsigned int)v11 );
      v19 = v40;
    }
    goto LABEL_35;
  }
  return -1073741701;
}
