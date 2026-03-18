/*
 * XREFs of ?InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@@Z @ 0x1C007A294
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0077948 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1C0025FFC (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ?CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C008569C (-CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::InsertVadToReservedListForNewVaRange(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE a3)
{
  struct _RTL_BALANCED_NODE *v3; // rsi
  char v4; // di
  char v5; // bl
  struct _RTL_BALANCED_NODE *v8; // rax
  __int64 v9; // r8
  _DWORD *v10; // rax
  __int64 v11; // rcx

  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  v4 = 0;
  v5 = (char)a3.0;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( (int)CompareVadRangeAvl(a2, v3) < 0 )
      {
        v8 = v3->Children[0];
        if ( !v3->Children[0] )
          break;
      }
      else
      {
        v8 = v3->Children[1];
        if ( !v8 )
        {
          v4 = 1;
          break;
        }
      }
      v3 = v8;
    }
  }
  *(_BYTE *)&a3.0 = v4;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RtlAvlInsertNodeEx)((char *)this + 48, v3, a3.0, a2);
  v10 = (_DWORD *)((char *)a2 + 72);
  if ( (v5 & 0x10) != 0 )
    *v10 |= 0x800u;
  if ( (v5 & 8) != 0 || (v5 & 4) != 0 )
    v11 = *((_DWORD *)a2 + 18) & 0xFFFFFFF0 | 2;
  else
    v11 = *v10 & 0xFFFFFFF0 | 3;
  *v10 = v11;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    McTemplateK0pqxx_EtwWriteTransfer(
      v11,
      &CreateGpuVirtualAddressRange,
      v9,
      this,
      v11,
      *((_QWORD *)a2 + 3),
      *((_QWORD *)a2 + 4));
}
