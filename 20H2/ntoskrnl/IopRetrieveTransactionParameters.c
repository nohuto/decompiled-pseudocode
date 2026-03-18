/*
 * XREFs of IopRetrieveTransactionParameters @ 0x140600C60
 * Callers:
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x140600550 (IopAllocRealFileObject.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     IopGetSetSpecificExtension @ 0x14029F8F4 (IopGetSetSpecificExtension.c)
 *     IopCheckStackForTransactionSupport @ 0x1403948C4 (IopCheckStackForTransactionSupport.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopRetrieveTransactionParameters(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  int SetSpecificExtension; // edi
  struct _KTHREAD *CurrentThread; // rcx
  _WORD *Teb; // rax
  __int64 v12; // r9
  _WORD *v13; // rcx
  __int16 v14; // [rsp+30h] [rbp-58h]
  int v15; // [rsp+34h] [rbp-54h]
  HANDLE Handle; // [rsp+38h] [rbp-50h] BYREF
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  _WORD *v18; // [rsp+48h] [rbp-40h] BYREF

  v18 = 0LL;
  Handle = 0LL;
  v14 = 0;
  result = TmCurrentTransaction(&Handle);
  SetSpecificExtension = result;
  v15 = result;
  if ( (_DWORD)result == -1073741637 )
  {
    SetSpecificExtension = 0;
    v15 = 0;
  }
  else if ( (int)result < 0 )
  {
    return result;
  }
  if ( Handle )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0
      || CurrentThread->ApcStateIndex == 1
      || (Teb = CurrentThread->Teb) == 0LL )
    {
      SetSpecificExtension = -1072103400;
    }
    else
    {
      v14 = Teb[372];
      SetSpecificExtension = v15;
    }
  }
  if ( SetSpecificExtension < 0 || !Handle )
    return (unsigned int)SetSpecificExtension;
  if ( IopCheckStackForTransactionSupport(a1)
    || (*(_WORD *)(a2 + 70) &= 1u, *(_DWORD *)(a2 + 88) == 1) && (a3 & 0xFEEDFF56) == 0
    || *(_BYTE *)(a2 + 137) )
  {
    Object = 0LL;
    if ( ObReferenceObjectByHandle(Handle, 0x120037u, (POBJECT_TYPE)TmTransactionObjectType, 1, &Object, 0LL) < 0 )
    {
      return (unsigned int)-1072103400;
    }
    else
    {
      LOBYTE(v12) = 1;
      SetSpecificExtension = IopGetSetSpecificExtension(a4, 0, 16LL, v12, &v18, 0LL);
      if ( SetSpecificExtension >= 0 )
      {
        v13 = v18;
        *v18 = 16;
        v13[1] = v14;
        *((_QWORD *)v13 + 1) = Object;
        return (unsigned int)SetSpecificExtension;
      }
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    }
    return (unsigned int)SetSpecificExtension;
  }
  return 3222863935LL;
}
