/*
 * XREFs of ?InternalInsertValue@HidChannelValueInfo@@AEAAXI_KPEAE@Z @ 0x1800ACA60
 * Callers:
 *     ?InsertValue@HidChannelValueInfo@@QEAAJE_KPEAE@Z @ 0x1800AC9D4 (-InsertValue@HidChannelValueInfo@@QEAAJE_KPEAE@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z @ 0x1800ACA04 (-InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJI_KPEAE@Z @ 0x1800ACA34 (-InsertValue@HidChannelValueInfo@@QEAAJI_KPEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HidChannelValueInfo::InternalInsertValue(
        HidChannelValueInfo *this,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int8 *a4)
{
  __int64 v5; // r8
  unsigned __int8 *v6; // rdx
  unsigned __int8 v7; // cl

  if ( *((unsigned int *)this + 12) < a3 )
  {
    v5 = (unsigned __int64)a2 << *((_BYTE *)this + 44);
    v6 = &a4[*((unsigned int *)this + 14) + 1];
    v7 = 1;
    *v6 = v5;
    if ( *((_DWORD *)this + 10) > 1u )
    {
      do
      {
        ++v6;
        v5 >>= 8;
        ++v7;
        *v6 |= v5;
      }
      while ( (unsigned int)v7 < *((_DWORD *)this + 10) );
    }
  }
}
