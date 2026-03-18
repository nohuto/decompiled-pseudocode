/*
 * XREFs of ?FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z @ 0x1C00211E8
 * Callers:
 *     ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020F60 (-Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1C00701E0 (imp_WdfRegistryAssignMultiString.c)
 * Callees:
 *     memmove @ 0x1C0036E00 (memmove.c)
 */

wchar_t *__fastcall FxCopyMultiSz(wchar_t *Buffer, FxCollectionInternal *StringCollection)
{
  FxCollectionInternal *i; // rsi
  size_t v5; // rbx

  for ( i = (FxCollectionInternal *)&StringCollection->m_ListHead.Flink[-1].Blink;
        i != StringCollection;
        i = (FxCollectionInternal *)&i->m_ListHead.Flink[-1].Blink )
  {
    v5 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)&i->m_Count + 104LL) + 2);
    memmove(Buffer, *(const void **)(*(_QWORD *)&i->m_Count + 112LL), v5);
    Buffer = (wchar_t *)((char *)Buffer + v5);
  }
  if ( !StringCollection->m_Count )
    *Buffer++ = 0;
  *Buffer = 0;
  return Buffer + 1;
}
