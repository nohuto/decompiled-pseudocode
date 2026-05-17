/*
 * XREFs of _RtlGetFullPathName_UstrEx@32 @ 0x4B2C9650
 * Callers:
 *     _RtlDosSearchPath_Ustr@36 @ 0x4B2C5170 (_RtlDosSearchPath_Ustr@36.c)
 *     _RtlDosApplyFileIsolationRedirection_Ustr@36 @ 0x4B2C9830 (_RtlDosApplyFileIsolationRedirection_Ustr@36.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0 (_RtlGetFullPathName_Ustr@24.c)
 */

int __stdcall RtlGetFullPathName_UstrEx(
        unsigned __int16 *a1,
        int a2,
        int a3,
        _DWORD *a4,
        int *a5,
        _BYTE *a6,
        int *a7,
        unsigned int *a8)
{
  _DWORD *v8; // esi
  _WORD *v9; // eax
  unsigned int FullPathName_Ustr; // ecx
  int v11; // esi
  _WORD *StringRoutine; // edi
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  __int16 v17; // cx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  unsigned __int16 v21; // [esp+Ch] [ebp-1Ch]
  int v22; // [esp+Ch] [ebp-1Ch]
  size_t v23; // [esp+Ch] [ebp-1Ch]
  int v24; // [esp+10h] [ebp-18h] BYREF
  _WORD *v25; // [esp+14h] [ebp-14h]
  unsigned int v26; // [esp+18h] [ebp-10h]
  int v27; // [esp+1Ch] [ebp-Ch]
  int v28[2]; // [esp+20h] [ebp-8h] BYREF

  v8 = a4;
  v24 = 0;
  v25 = 0;
  if ( a4 )
    *a4 = 0;
  if ( a8 )
    *a8 = 0;
  if ( a5 )
    *a5 = 0;
  v28[0] = *a7;
  if ( a2 )
  {
    if ( a3 && !a4 )
    {
      v11 = -1073741811;
LABEL_23:
      *a7 = v28[0];
      return v11;
    }
    v21 = *(_WORD *)(a2 + 2);
    v9 = *(_WORD **)(a2 + 4);
LABEL_11:
    FullPathName_Ustr = RtlGetFullPathName_Ustr(a1, v21, v9, &v24, a6, v28);
    if ( FullPathName_Ustr )
    {
      if ( a2 && FullPathName_Ustr < v21 )
      {
        *(_WORD *)a2 = FullPathName_Ustr;
        if ( a5 )
        {
          if ( v24 )
            v18 = (v24 - *(_DWORD *)(a2 + 4)) >> 1;
          else
            v18 = 0;
          *a5 = v18;
        }
        if ( a4 )
          *a4 = a2;
        v11 = 0;
      }
      else if ( a3 )
      {
        v14 = (int)v25;
        if ( v25 )
        {
          v8 = a4;
          if ( FullPathName_Ustr < v21 )
          {
            *(_WORD *)a3 = FullPathName_Ustr;
            *(_WORD *)(a3 + 2) = v21;
            *(_WORD *)(v14 + 2 * (FullPathName_Ustr >> 1)) = 0;
            if ( a5 )
            {
              if ( v24 )
                v19 = (v24 - v14) >> 1;
              else
                v19 = 0;
              *a5 = v19;
            }
            if ( a4 )
              *a4 = a3;
            *(_DWORD *)(a3 + 4) = v14;
            v11 = 0;
            goto LABEL_23;
          }
        }
        if ( FullPathName_Ustr + 2 <= 0xFFFE )
        {
          while ( 1 )
          {
            v27 = (unsigned __int16)(FullPathName_Ustr + 2);
            v22 = v27;
            StringRoutine = (_WORD *)NtdllpAllocateStringRoutine(v27);
            if ( !StringRoutine )
            {
              v11 = -1073741801;
              goto LABEL_19;
            }
            v23 = v22 - 2;
            v15 = RtlGetFullPathName_Ustr(a1, v23, StringRoutine, &v24, a6, v28);
            v16 = v15;
            v26 = v15;
            if ( !v15 )
            {
              v11 = -1073741773;
              goto LABEL_19;
            }
            if ( v15 <= v23 )
              break;
            RtlDeleteBoundaryDescriptor((int)StringRoutine);
            LOWORD(FullPathName_Ustr) = v26;
            if ( v26 + 2 > 0xFFFE )
              goto LABEL_55;
          }
          if ( a5 )
          {
            if ( v24 )
              v20 = (v24 - (int)StringRoutine) >> 1;
            else
              v20 = 0;
            *a5 = v20;
          }
          StringRoutine[v16 >> 1] = 0;
          *(_WORD *)a3 = v16;
          v17 = v27;
          *(_DWORD *)(a3 + 4) = StringRoutine;
          *(_WORD *)(a3 + 2) = v17;
          if ( v8 )
            *v8 = a3;
          StringRoutine = 0;
          v11 = 0;
          goto LABEL_19;
        }
LABEL_55:
        v11 = -1073741562;
      }
      else
      {
        if ( a8 )
          *a8 = FullPathName_Ustr;
        v11 = -1073741789;
      }
    }
    else
    {
      v11 = -1073741773;
    }
    StringRoutine = 0;
LABEL_19:
    if ( v25 )
      RtlDeleteBoundaryDescriptor((int)v25);
    if ( StringRoutine )
      RtlDeleteBoundaryDescriptor((int)StringRoutine);
    goto LABEL_23;
  }
  v21 = 520;
  v9 = (_WORD *)NtdllpAllocateStringRoutine(520);
  v25 = v9;
  if ( v9 )
    goto LABEL_11;
  return -1073741801;
}
