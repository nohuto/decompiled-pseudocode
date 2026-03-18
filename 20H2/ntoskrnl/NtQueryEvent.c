/*
 * XREFs of NtQueryEvent @ 0x1406D0F00
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ExpQueryCrossVmEvent @ 0x14095F090 (ExpQueryCrossVmEvent.c)
 */

__int64 __fastcall NtQueryEvent(HANDLE Handle, int a2, int *a3, int a4, unsigned __int64 a5)
{
  KPROCESSOR_MODE PreviousMode; // r12
  _DWORD *v8; // rdi
  __int64 v9; // rcx
  NTSTATUS v10; // eax
  NTSTATUS v11; // esi
  struct _DMA_ADAPTER *v12; // r14
  int v14; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  PVOID v16; // [rsp+40h] [rbp-28h] BYREF
  PVOID v17; // [rsp+48h] [rbp-20h]
  int v18; // [rsp+78h] [rbp+10h] BYREF

  v18 = 0;
  v14 = 0;
  if ( a2 )
    return 3221225475LL;
  if ( a4 != 8 )
    return 3221225476LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(a3, 8uLL, 4u);
    v8 = (_DWORD *)a5;
    if ( a5 )
    {
      v9 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v9 = a5;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    v8 = (_DWORD *)a5;
  }
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v11 = v10;
  v12 = (struct _DMA_ADAPTER *)Object;
  v17 = Object;
  LODWORD(Object) = v10;
  if ( v10 < 0 )
  {
    if ( v10 == -1073741788 )
    {
      if ( ExCrossVmEventObjectType )
      {
        v16 = 0LL;
        v11 = ObReferenceObjectByHandle(Handle, 1u, ExCrossVmEventObjectType, PreviousMode, &v16, 0LL);
        v12 = (struct _DMA_ADAPTER *)v16;
        v17 = v16;
        LODWORD(Object) = v11;
        if ( v11 >= 0 )
        {
          v11 = ExpQueryCrossVmEvent(v16, &v18, &v14);
          LODWORD(Object) = v11;
        }
      }
    }
  }
  else
  {
    v14 = *(_DWORD *)(&v12->Size + 1);
    v18 = v12->Version & 0x7F;
  }
  if ( v11 >= 0 )
  {
    if ( PreviousMode )
    {
      *a3 = v18;
      a3[1] = v14;
      if ( v8 )
        *v8 = 8;
    }
    else
    {
      *a3 = v18;
      a3[1] = v14;
      if ( v8 )
        *v8 = 8;
    }
  }
  if ( v12 )
    HalPutDmaAdapter(v12);
  return (unsigned int)v11;
}
