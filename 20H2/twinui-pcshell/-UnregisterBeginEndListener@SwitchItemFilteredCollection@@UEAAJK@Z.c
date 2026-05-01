/*
 * XREFs of ?UnregisterBeginEndListener@SwitchItemFilteredCollection@@UEAAJK@Z @ 0x180394440
 * Callers:
 *     ?UnregisterBeginEndListener@SwitchItemFilteredCollection@@WKI@EAAJK@Z @ 0x1800FE3E0 (-UnregisterBeginEndListener@SwitchItemFilteredCollection@@WKI@EAAJK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall SwitchItemFilteredCollection::UnregisterBeginEndListener(
        SwitchItemFilteredCollection *this,
        unsigned int a2)
{
  return ObservableObjectArray::UnregisterBeginEndListener(this, a2);
}
