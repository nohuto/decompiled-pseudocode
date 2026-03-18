/*
 * XREFs of FindOrCreateMaterialProperty @ 0x1C006A0A8
 * Callers:
 *     NtDCompositionSetMaterialProperty @ 0x1C0069F40 (NtDCompositionSetMaterialProperty.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     FindMaterialProperty @ 0x1C006BA24 (FindMaterialProperty.c)
 *     ??_GMaterialProperty@@QEAAPEAXI@Z @ 0x1C008147C (--_GMaterialProperty@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall FindOrCreateMaterialProperty(__int64 a1, __int64 a2, MaterialProperty **a3)
{
  unsigned int v6; // edx
  int MaterialProperty; // edi
  MaterialProperty *v8; // rax
  MaterialProperty *v9; // rbx
  __int128 v10; // xmm0
  __int128 Buffer; // [rsp+20h] [rbp-38h] BYREF
  MaterialProperty *v13; // [rsp+30h] [rbp-28h]
  MaterialProperty *v14; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0LL;
  MaterialProperty = FindMaterialProperty(a1, a2, &v14);
  if ( MaterialProperty != -1073741275 )
  {
    v9 = v14;
LABEL_13:
    if ( MaterialProperty >= 0 )
      goto LABEL_7;
    goto LABEL_14;
  }
  v8 = (MaterialProperty *)Win32AllocPoolZInit(0x18uLL);
  v9 = v8;
  if ( v8 )
  {
    *((_QWORD *)v8 + 2) = 0LL;
    *(_QWORD *)v8 = a1;
    *((_QWORD *)v8 + 1) = a2;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    MaterialProperty = -1073741801;
    goto LABEL_13;
  }
  v10 = *(_OWORD *)v9;
  v13 = v9;
  Buffer = v10;
  if ( RtlInsertElementGenericTable(Table, &Buffer, 0x18u, 0LL) )
  {
    MaterialProperty = 0;
LABEL_7:
    *a3 = v9;
    return (unsigned int)MaterialProperty;
  }
  MaterialProperty = -1073741801;
LABEL_14:
  if ( v9 )
    MaterialProperty::`scalar deleting destructor'(v9, v6);
  return (unsigned int)MaterialProperty;
}
