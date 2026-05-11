/*
 * XREFs of PropertyGetPinName @ 0x1C0027C80
 * Callers:
 *     <none>
 * Callees:
 *     RegistryReadName @ 0x1C002ACFC (RegistryReadName.c)
 */

__int64 __fastcall PropertyGetPinName(IRP *a1, __int64 a2, _WORD *a3)
{
  unsigned int v6; // ebx
  unsigned __int64 Length; // rsi
  PKSFILTER FilterFromIrp; // rax
  __int64 v9; // rcx
  _QWORD *Context; // rbp
  const KSPIN_DESCRIPTOR_EX *PinDescriptors; // r11
  unsigned int v12; // eax
  __int64 v13; // r10
  __int64 v14; // r8
  unsigned int v15; // edx
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned int v18; // ecx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  __int64 v21; // r10
  __int16 v22; // ax
  _WORD *v23; // rax
  int v24; // ebx
  const GUID *v25; // rdx
  unsigned int Name; // eax
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // r9
  unsigned __int64 v31; // r8
  __int64 v32; // r9
  __int16 v33; // ax
  _WORD *v34; // rax
  unsigned int v36; // [rsp+60h] [rbp+8h] BYREF

  v6 = -1073741275;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v36 = 0;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( !FilterFromIrp )
    return v6;
  v9 = *(unsigned int *)(a2 + 24);
  if ( (unsigned int)v9 >= FilterFromIrp->Descriptor->PinDescriptorsCount )
    return v6;
  Context = FilterFromIrp->Context;
  PinDescriptors = FilterFromIrp->Descriptor->PinDescriptors;
  v12 = 0;
  v13 = 22 * v9;
  v14 = Context[2];
  v15 = *(_DWORD *)(v14 + 192);
  v16 = *(_QWORD *)(v14 + 200);
  if ( !v15 )
    goto LABEL_24;
  do
  {
    if ( *(_DWORD *)(v16 + 84) == (_DWORD)v9 )
      break;
    v16 += 168LL;
    ++v12;
  }
  while ( v12 < v15 );
  if ( v12 >= v15 || (v17 = *(unsigned __int16 *)(v16 + 112), !(_WORD)v17) )
  {
LABEL_24:
    v25 = (&PinDescriptors->PinDescriptor.Name)[v13];
    if ( v25 || (v25 = (&PinDescriptors->PinDescriptor.Category)[v13]) != 0LL )
    {
      Name = RegistryReadName((_DWORD)Context, (_DWORD)v25, Length, (_DWORD)a3, (__int64)&v36);
      v18 = v36;
      v6 = Name;
    }
    else
    {
      v27 = *(unsigned int *)(v14 + 32);
      if ( (_DWORD)Length )
      {
        v28 = v27 + 2;
        v18 = v27 + 2;
        if ( v28 >= Length )
          v18 = Length;
        v29 = Length >> 1;
        v36 = v18;
        v30 = *(_QWORD *)(v14 + 24);
        v6 = Length >> 1 == 0 ? 0xC000000D : 0;
        if ( Length >> 1 )
        {
          v31 = 2147483646 - v29;
          v32 = v30 - (_QWORD)a3;
          do
          {
            if ( !(v31 + v29) )
              break;
            v33 = *(_WORD *)((char *)a3 + v32);
            if ( !v33 )
              break;
            *a3++ = v33;
            --v29;
          }
          while ( v29 );
          v34 = a3 - 1;
          if ( v29 )
            v34 = a3;
          v24 = -(v29 == 0);
          *v34 = 0;
          goto LABEL_23;
        }
      }
      else
      {
        v18 = v27 + 2;
      }
    }
LABEL_39:
    if ( (v6 & 0x80000000) == 0 )
    {
LABEL_42:
      a1->IoStatus.Information = v18;
      return v6;
    }
    goto LABEL_40;
  }
  v6 = 0;
  if ( (_DWORD)Length )
  {
    if ( v17 + 2 >= Length )
      v18 = Length;
    else
      v18 = v17 + 2;
    v19 = Length >> 1;
    v36 = v18;
    v6 = Length >> 1 == 0 ? 0xC000000D : 0;
    if ( Length >> 1 )
    {
      v20 = 2147483646 - v19;
      v21 = *(_QWORD *)(v16 + 120) - (_QWORD)a3;
      do
      {
        if ( !(v20 + v19) )
          break;
        v22 = *(_WORD *)((char *)a3 + v21);
        if ( !v22 )
          break;
        *a3++ = v22;
        --v19;
      }
      while ( v19 );
      v23 = a3 - 1;
      if ( v19 )
        v23 = a3;
      v6 = v19 == 0 ? 0x80000005 : 0;
      *v23 = 0;
    }
  }
  else
  {
    v18 = v17 + 2;
    v36 = v18;
  }
  if ( (v6 & 0x80000000) == 0 )
  {
    v24 = -((unsigned int)Length < *(unsigned __int16 *)(v16 + 112));
LABEL_23:
    v6 = v24 & 0x80000005;
    goto LABEL_39;
  }
LABEL_40:
  if ( v6 == -2147483643 || v6 == -1073741789 )
    goto LABEL_42;
  return v6;
}
