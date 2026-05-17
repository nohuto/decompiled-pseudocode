/*
 * XREFs of _RtlpProcessIFEOKeyFilter@12 @ 0x4B2AA107
 * Callers:
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlPrefixUnicodeString@12 @ 0x4B2E40C0 (_RtlPrefixUnicodeString@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _ZwEnumerateKey@24 @ 0x4B2F2CA0 (_ZwEnumerateKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall RtlpProcessIFEOKeyFilter(HANDLE *a1, int a2, int *a3)
{
  HANDLE *v3; // ebx
  _BYTE *Heap; // edi
  int result; // eax
  int v6; // esi
  _BYTE *v7; // eax
  int v8; // ecx
  int inited; // esi
  __int16 v10; // ax
  _BYTE *v11; // ebx
  int v12; // eax
  int v13; // eax
  void *ProcessHeap; // ecx
  _DWORD v15[6]; // [esp+10h] [ebp-27Ch] BYREF
  _WORD v16[2]; // [esp+28h] [ebp-264h] BYREF
  _BYTE *v17; // [esp+2Ch] [ebp-260h]
  HANDLE *v18; // [esp+30h] [ebp-25Ch]
  int v19; // [esp+34h] [ebp-258h]
  int v20; // [esp+38h] [ebp-254h]
  _BYTE *v21; // [esp+3Ch] [ebp-250h]
  _BYTE *v22; // [esp+40h] [ebp-24Ch]
  int v23; // [esp+44h] [ebp-248h] BYREF
  int v24; // [esp+48h] [ebp-244h]
  _WORD v25[2]; // [esp+4Ch] [ebp-240h] BYREF
  _BYTE *v26; // [esp+50h] [ebp-23Ch]
  int v27; // [esp+54h] [ebp-238h] BYREF
  int v28; // [esp+58h] [ebp-234h]
  HANDLE Handle; // [esp+5Ch] [ebp-230h] BYREF
  _BYTE v30[4]; // [esp+60h] [ebp-22Ch] BYREF
  int v31; // [esp+64h] [ebp-228h]
  int v32; // [esp+68h] [ebp-224h]
  int v33; // [esp+6Ch] [ebp-220h]

  Handle = 0;
  v3 = a1;
  v19 = a2;
  v18 = a1;
  Heap = 0;
  v28 = 544;
  v22 = v30;
  result = RtlInitUnicodeStringEx(v25, L"UseFilter");
  if ( result < 0 )
    return result;
  result = ZwQueryValueKey(*v3, v25, 2, v30, 544, &v27);
  if ( result < 0 )
  {
    if ( result != -1073741772 && result != -1073741789 && result != -2147483643 )
      return result;
    return 0;
  }
  if ( v31 != 4 || v32 != 4 || !v33 )
    return 0;
  v6 = a3[1];
  v23 = *a3;
  v24 = v6;
  result = RtlInitUnicodeStringEx(v25, L"\\??\\");
  if ( result < 0 )
    return result;
  if ( (unsigned __int8)RtlPrefixUnicodeString(v25, &v23, 1) )
  {
    LOWORD(v23) = v23 - 8;
    HIWORD(v23) -= 8;
    v24 = v6 + 8;
  }
  v7 = v30;
  v8 = 0;
  v21 = v30;
  v20 = 0;
  while ( 1 )
  {
    inited = ZwEnumerateKey(*v3, v8, 0, v7, v28, &v27);
    if ( inited >= 0 )
    {
      v25[0] = *((_WORD *)v21 + 6);
      v10 = *((_WORD *)v21 + 6);
      v15[4] = 0;
      v15[5] = 0;
      v25[1] = v10;
      v26 = v21 + 16;
      v15[1] = *v3;
      v15[2] = v25;
      v15[0] = 24;
      v15[3] = 576;
      inited = ZwOpenKey(&Handle, v19, v15);
      if ( inited >= 0 )
        break;
    }
LABEL_38:
    v7 = v21;
    v8 = ++v20;
    if ( inited < 0 )
      goto LABEL_39;
  }
  inited = RtlInitUnicodeStringEx(v25, L"FilterFullPath");
  if ( inited < 0 )
    goto LABEL_37;
  v11 = v22;
  v12 = v28;
  do
  {
    v13 = ZwQueryValueKey(Handle, v25, 2, v11, v12, &v27);
    inited = v13;
    if ( v13 == -2147483643 || v13 == -1073741789 )
    {
      if ( Heap )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( ProcessHeap )
      {
        Heap = (_BYTE *)RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, v27);
        if ( Heap )
        {
          v12 = v27;
          v11 = Heap;
          v21 = Heap;
          v28 = v27;
          continue;
        }
      }
      else
      {
        Heap = 0;
      }
      inited = -1073741801;
    }
    v12 = v28;
  }
  while ( inited == -2147483643 || inited == -1073741789 );
  v22 = v11;
  v3 = v18;
  if ( inited < 0 )
  {
    NtClose(Handle);
    inited = inited != -1073741772 ? inited : 0;
    goto LABEL_38;
  }
  if ( *((_DWORD *)v22 + 1) != 1
    || *((_DWORD *)v22 + 2) > 0xFFFEu
    || (v16[0] = *((_WORD *)v22 + 4) - 2, v16[1] = v16[0], v17 = v22 + 12, RtlCompareUnicodeString(&v23, v16, 1)) )
  {
LABEL_37:
    NtClose(Handle);
    goto LABEL_38;
  }
LABEL_39:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( inited >= 0 )
  {
    NtClose(*v3);
    *v3 = Handle;
  }
  return inited != -2147483622 ? inited : 0;
}
