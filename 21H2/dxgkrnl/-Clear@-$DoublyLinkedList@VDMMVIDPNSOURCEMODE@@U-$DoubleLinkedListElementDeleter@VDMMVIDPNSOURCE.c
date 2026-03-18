/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAXXZ @ 0x1C0016FF0
 * Callers:
 *     ??_GDMMVIDPNSOURCEMODESET@@UEAAPEAXI@Z @ 0x1C0010380 (--_GDMMVIDPNSOURCEMODESET@@UEAAPEAXI@Z.c)
 *     ??1?$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ @ 0x1C006A428 (--1-$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ.c)
 *     ??_E?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@UEAAPEAXI@Z @ 0x1C006A4A0 (--_E-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMOD.c)
 *     ?Clear@?$Set@VDMMVIDPNSOURCEMODE@@@@UEAAXXZ @ 0x1C006A590 (-Clear@-$Set@VDMMVIDPNSOURCEMODE@@@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::Clear(
        __int64 a1)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  v2 = (__int64 *)(a1 + 16);
  while ( 1 )
  {
    result = *v2;
    if ( (__int64 *)*v2 == v2 )
      break;
    if ( *(__int64 **)(result + 8) != v2 || (v4 = *(_QWORD *)result, *(_QWORD *)(*(_QWORD *)result + 8LL) != result) )
      __fastfail(3u);
    *v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    --*(_QWORD *)(a1 + 32);
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    if ( result != -56 )
      (**(void (__fastcall ***)(__int64, __int64))(result + 56))(result + 56, 1LL);
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    result = WdLogSingleEntry1(1LL, 394LL);
    if ( bTracingEnabled )
    {
      result = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        return McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                 v6,
                 v5,
                 v7,
                 0,
                 2,
                 -1,
                 (__int64)L"this->GetNumElements() == 0",
                 394LL,
                 0LL,
                 0LL,
                 0LL,
                 0LL);
    }
  }
  return result;
}
